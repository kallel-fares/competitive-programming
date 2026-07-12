# Codeforces 1215C - Swap Letters
# Rating: 1500 | Tags: constructive algorithms, greedy
# Problem:    https://codeforces.com/problemset/problem/1215/C
# Submission: https://codeforces.com/contest/1215/submission/382203345
# Solved: 2026-07-12 (PRACTICE)

import sys
import os

if os.path.exists("input.txt"):
    sys.stdin = open("input.txt")
    sys.stdout = open("output.txt", "w")  # optional, if you want file output too

input = sys.stdin.readline

def main():
    a = int(input())
    ch1 = input()
    ch2 = input()

    l1,l2=[],[]

    for i in range(a):
        if ch1[i] != ch2[i]:
            if ch1[i] == "a":
                l2.append(i+1)
            else:
                l1.append(i+1)

    # print(l1,l2)
    ans = []
    for i in range(0,len(l1)-1, 2):
        ans.append((l1[i],l1[i+1]))

    for i in range(0,len(l2)-1, 2):
        ans.append((l2[i],l2[i+1]))


    if len(l1)&1 and len(l2)&1:
        print(len(ans)+2)
        for ele in ans:
            print(ele[0],ele[1])
        print(l1[-1],l1[-1])
        print(l1[-1],l2[-1])
        return
        
    
    if len(l1)&1 or len(l2)&1:
        print(-1)
        return

    print(len(ans))
    for ele in ans:
        print(ele[0],ele[1])
    
main()

# for i in range(len(l2)):
