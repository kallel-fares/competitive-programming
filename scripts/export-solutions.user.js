// ==UserScript==
// @name         Codeforces — export my accepted solutions
// @namespace    https://github.com/kallel-fares
// @version      1.0
// @description  Exports the source of your own accepted submissions to a JSON file, at human pace, from your own logged-in session.
// @author       kallel-fares
// @match        *://codeforces.com/*
// @match        *://*.codeforces.com/*
// @run-at       document-idle
// @grant        none
// ==/UserScript==

/*
 * Runs entirely inside your own browser tab, using your own session, against
 * your own submissions. Nothing is sent anywhere: the only output is a JSON
 * file downloaded to your machine.
 *
 * Usage:
 *   1. Log in to Codeforces.
 *   2. Open any codeforces.com page.
 *   3. Click "Export solutions" (panel, top right).
 *   4. Leave the tab open (~30 min). Progress survives a reload.
 *   5. The file dicfore-solutions.json downloads when it finishes.
 */

(function () {
  "use strict";

  const HANDLE = "dicfore";
  // The limiter is a quota per window, so pacing only changes when we hit it,
  // not how much gets through. Run flat out, absorb the block, cool down.
  const DELAY_MS = 2000;       // base pause between requests
  const JITTER_MS = 1500;      // random extra, so the cadence isn't robotic
  const MAX_STREAK = 3;        // consecutive failures before backing off
  const BATCH_LIMIT = 0;       // 0 = no voluntary stop; run until blocked
  const COOLDOWN_MS = 5 * 60 * 1000;   // between healthy batches
  const BLOCK_COOLDOWN_MS = 10 * 60 * 1000;  // after hitting the limiter
  const STORAGE_KEY = "cf-export-" + HANDLE;
  // Codeforces serves mirrors (m1/m2/m3/www). Stay on whichever host we were
  // loaded from, so the session cookie and CSRF token are same-origin.
  const ORIGIN = location.origin;

  console.log("[cf-export] loaded on " + ORIGIN);

  let state = { sources: {}, failed: [], done: false };
  let running = false;
  let stopRequested = false;
  let targets = [];

  // ---------------------------------------------------------------- storage

  function load() {
    try {
      const raw = localStorage.getItem(STORAGE_KEY);
      if (raw) state = Object.assign(state, JSON.parse(raw));
    } catch (e) {
      console.warn("[cf-export] could not read saved progress:", e);
    }
  }

  function save() {
    try {
      localStorage.setItem(STORAGE_KEY, JSON.stringify(state));
      return true;
    } catch (e) {
      // Quota exceeded: keep going in memory, but the tab must stay open.
      console.warn("[cf-export] progress not persisted:", e);
      return false;
    }
  }

  // ------------------------------------------------------------------- util

  const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
  const pause = () => sleep(DELAY_MS + Math.random() * JITTER_MS);

  function csrfToken() {
    const meta = document.querySelector('meta[name="X-Csrf-Token"]');
    if (meta && meta.content) return meta.content;
    const input = document.querySelector('input[name="csrf_token"]');
    if (input && input.value) return input.value;
    const el = document.querySelector("[data-csrf]");
    if (el) return el.getAttribute("data-csrf");
    const m = document.documentElement.innerHTML.match(/csrf['"]?\s*[:=]\s*['"]([0-9a-f]{32})['"]/i);
    return m ? m[1] : null;
  }

  function submissionUrl(rec) {
    const base = rec.isGym ? "/gym/" : "/contest/";
    return base + rec.contestId + "/submission/" + rec.submissionId;
  }

  // ------------------------------------------------------------- fetch list

  async function loadTargets() {
    const res = await fetch(
      ORIGIN + "/api/user.status?handle=" + encodeURIComponent(HANDLE),
      { credentials: "omit" }
    );
    const payload = await res.json();
    if (payload.status !== "OK") throw new Error("API: " + payload.comment);

    // Earliest accepted submission per problem — that is the solve date.
    const firstAc = new Map();
    payload.result
      .filter((s) => s.verdict === "OK")
      .sort((a, b) => a.creationTimeSeconds - b.creationTimeSeconds)
      .forEach((s) => {
        const key = s.problem.contestId + s.problem.index;
        if (!firstAc.has(key)) {
          firstAc.set(key, {
            submissionId: s.id,
            contestId: s.problem.contestId,
            isGym: s.problem.contestId >= 100000,
          });
        }
      });
    return [...firstAc.values()];
  }

  // ----------------------------------------------------------- fetch source

  // Primary: the same endpoint the "click a submission" popup uses.
  async function viaSubmitSource(rec, token) {
    const body = new URLSearchParams({
      submissionId: String(rec.submissionId),
      csrf_token: token,
    });
    const res = await fetch(ORIGIN + "/data/submitSource", {
      method: "POST",
      credentials: "include",
      headers: {
        "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8",
        "X-Csrf-Token": token,
        "X-Requested-With": "XMLHttpRequest",
      },
      body,
    });
    if (!res.ok) throw new Error("HTTP " + res.status);
    const data = await res.json();
    if (!data.source) throw new Error("no source field");
    return data.source;
  }

  // Fallback: read the submission page. DOM parsing decodes HTML entities
  // correctly, so &lt; never survives into the saved source.
  async function viaPage(rec) {
    const res = await fetch(ORIGIN + submissionUrl(rec), {
      credentials: "include",
    });
    if (!res.ok) throw new Error("HTTP " + res.status);
    const doc = new DOMParser().parseFromString(await res.text(), "text/html");
    const pre = doc.querySelector("#program-source-text");
    if (!pre) throw new Error("source element not found");
    return pre.textContent;
  }

  async function fetchSource(rec) {
    const token = csrfToken();
    if (token) {
      try {
        return await viaSubmitSource(rec, token);
      } catch (e) {
        console.warn("[cf-export] submitSource failed for " + rec.submissionId + ":", e.message);
      }
    }
    return await viaPage(rec);
  }

  // -------------------------------------------------------------- main loop

  // Visible countdown so a long cooldown doesn't look like a hang.
  async function cooldown(ms, why) {
    const end = Date.now() + ms;
    while (Date.now() < end && !stopRequested) {
      const left = Math.max(0, Math.round((end - Date.now()) / 1000));
      const m = Math.floor(left / 60);
      note(why + " — resuming automatically in " + m + "m " + (left % 60) + "s");
      await sleep(1000);
    }
    note("");
  }

  function remaining(list) {
    return list.filter((r) => !state.sources[r.submissionId]).length;
  }

  // Runs unattended: fetches a batch, cools down on its own, repeats until the
  // list is exhausted. No clicking between batches.
  async function run(list) {
    running = true;
    stopRequested = false;
    let persistWarned = false;
    let unproductive = 0;

    while (!stopRequested && remaining(list)) {
      let streak = 0;
      let fetched = 0;

      for (let i = 0; i < list.length && !stopRequested; i++) {
        const rec = list[i];
        if (state.sources[rec.submissionId]) continue;

        try {
          state.sources[rec.submissionId] = await fetchSource(rec);
          state.failed = state.failed.filter((id) => id !== rec.submissionId);
          streak = 0;
          fetched++;
        } catch (e) {
          console.warn("[cf-export] failed " + rec.submissionId + ":", e.message);
          if (!state.failed.includes(rec.submissionId)) state.failed.push(rec.submissionId);
          streak++;
        }

        if (!save() && !persistWarned) {
          persistWarned = true;
          note("Progress can't be saved to localStorage (too big) — keep this tab open.");
        }
        render();

        // A run of failures means rate-limiting, not bad submissions.
        if (streak >= MAX_STREAK) break;
        if (BATCH_LIMIT && fetched >= BATCH_LIMIT) break;
        await pause();
      }

      if (stopRequested || !remaining(list)) break;

      // Two full passes that fetched nothing means the rest are genuinely
      // unavailable, not throttled. Stop instead of looping forever.
      unproductive = fetched ? 0 : unproductive + 1;
      if (unproductive >= 2) {
        note("Gave up on " + remaining(list) + " submission(s) that keep failing.");
        break;
      }

      const blocked = streak >= MAX_STREAK;
      await cooldown(
        blocked ? BLOCK_COOLDOWN_MS : COOLDOWN_MS,
        blocked ? "Rate limited" : "Batch of " + fetched + " done"
      );
    }

    running = false;
    if (!remaining(list) && !stopRequested) {
      state.done = true;
      save();
      download();
    }
    render();
  }

  function download() {
    const blob = new Blob([JSON.stringify(state.sources, null, 0)], {
      type: "application/json",
    });
    const a = document.createElement("a");
    a.href = URL.createObjectURL(blob);
    a.download = HANDLE + "-solutions.json";
    document.body.appendChild(a);
    a.click();
    a.remove();
    setTimeout(() => URL.revokeObjectURL(a.href), 5000);
  }

  // -------------------------------------------------------------------- ui

  let panel, status, bar, noteEl;

  function note(msg) {
    noteEl.textContent = msg;
    noteEl.style.display = msg ? "block" : "none";
  }

  function render() {
    const have = Object.keys(state.sources).length;
    const total = targets.length || "?";
    const pct = targets.length ? Math.round((have / targets.length) * 100) : 0;
    status.textContent =
      have + " / " + total + (state.failed.length ? "  (" + state.failed.length + " failed)" : "");
    bar.style.width = pct + "%";
    panel.querySelector(".cfx-start").disabled = running;
    panel.querySelector(".cfx-stop").disabled = !running;
    panel.querySelector(".cfx-retry").disabled = running || !state.failed.length;
    panel.querySelector(".cfx-dl").disabled = !have;
  }

  function buildPanel() {
    // Safe to run twice (e.g. pasted into the console again after a reload).
    const old = document.getElementById("cfx-panel");
    if (old) old.remove();

    panel = document.createElement("div");
    panel.id = "cfx-panel";
    panel.style.cssText = [
      "position:fixed", "top:12px", "right:12px", "z-index:99999",
      "background:#fff", "border:1px solid #b9b9b9", "border-radius:6px",
      "box-shadow:0 2px 10px rgba(0,0,0,.2)", "padding:10px 12px",
      "font:12px/1.45 system-ui,sans-serif", "width:230px", "color:#222",
    ].join(";");

    panel.innerHTML = `
      <div style="font-weight:600;margin-bottom:6px">Export solutions</div>
      <div class="cfx-status" style="margin-bottom:5px;font-variant-numeric:tabular-nums">idle</div>
      <div style="background:#eee;border-radius:3px;height:5px;margin-bottom:8px;overflow:hidden">
        <div class="cfx-bar" style="background:#3b7dd8;height:100%;width:0%;transition:width .2s"></div>
      </div>
      <div style="display:flex;gap:5px;flex-wrap:wrap">
        <button class="cfx-start">Start</button>
        <button class="cfx-stop">Stop</button>
        <button class="cfx-retry">Retry</button>
        <button class="cfx-dl">Download</button>
      </div>
      <div class="cfx-note" style="display:none;margin-top:7px;color:#b25000"></div>`;

    document.body.appendChild(panel);
    status = panel.querySelector(".cfx-status");
    bar = panel.querySelector(".cfx-bar");
    noteEl = panel.querySelector(".cfx-note");
    panel.querySelectorAll("button").forEach((b) => {
      b.style.cssText = "padding:3px 7px;font-size:11px;cursor:pointer";
    });

    panel.querySelector(".cfx-start").onclick = async () => {
      note("");
      status.textContent = "loading list...";
      try {
        if (!targets.length) targets = await loadTargets();
      } catch (e) {
        note("Could not load submission list: " + e.message);
        return;
      }
      run(targets);
    };

    panel.querySelector(".cfx-stop").onclick = () => {
      stopRequested = true;
      note("Stopping after the current request — press Start to resume.");
    };

    panel.querySelector(".cfx-retry").onclick = async () => {
      note("");
      if (!targets.length) targets = await loadTargets();
      const retry = targets.filter((t) => state.failed.includes(t.submissionId));
      state.failed = [];
      run(retry);
    };

    panel.querySelector(".cfx-dl").onclick = download;
  }

  load();
  buildPanel();
  render();
  if (Object.keys(state.sources).length) {
    note("Resumed: " + Object.keys(state.sources).length + " already saved. Press Start.");
  }
})();
