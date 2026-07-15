# Codeforces 2246A - farmpiggie and Subset Sum
# Rating: unrated | Tags: constructive algorithms
# Problem:    https://codeforces.com/problemset/problem/2246/A
# Submission: https://codeforces.com/contest/2246/submission/382853354
# Solved: 2026-07-15 (VIRTUAL)

import sys
import os

if os.path.exists("input.txt"):
    sys.stdin = open("input.txt")
    sys.stdout = open("output.txt", "w")  # optional, if you want file output too

input = sys.stdin.readline

def main():
    n = int(input())
    for i in range(2,n+1):
        print(i,end=" ")
    print(1)

    

t=1
t = int(input())
while t :
    main()
    t-=1

# for i in range(len(l2)):
