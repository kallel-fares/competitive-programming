/*
 * Codeforces 1692A - Marathon
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1692/A
 * Submission: https://codeforces.com/contest/1692/submission/163653952
 * Solved: 2022-07-11 (VIRTUAL)
 */

/*********dicfore************/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define lowpos 1e-4 ++
#define forl(i, b, n) for (int i = b; i < n; i++)
#define testc \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int m = 1e9 + 7;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//

// int ans;
// pair<int, int> dfs(vector<vector<int>> & tree, int u,string &ch)
//{
////    cout<<u<<" ";
//    int w=0,b=0;
//    if(ch[u-1]=='B')
//        b++;
//    else
//        w++;
//
//    for(auto x:tree[u])
//    {
//        pair<int, int> aux=dfs(tree,x,ch);
//        w+=aux.first;
//        b+=aux.second;
//    }
//
//
//    if(b==w)
//        ans++;
//
//    return make_pair(w, b);
//
//
//
//}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    testc
    {
        int a, c, d, b;
        cin >> a >> b >> c >> d;
        int ans = 0;

        if (a < b)
            ans++;

        if (a < c)
            ans++;

        if (a < d)
            ans++;

        cout << ans << "\n";
    }
}
