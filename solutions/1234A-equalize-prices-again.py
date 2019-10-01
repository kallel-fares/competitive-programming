# Codeforces 1234A - Equalize Prices Again
# Rating: 800 | Tags: math
# Problem:    https://codeforces.com/problemset/problem/1234/A
# Submission: https://codeforces.com/contest/1234/submission/61643571
# Solved: 2019-10-01 (CONTESTANT)

from math import ceil
tc = int(input())
while tc>0:
    tc-=1
    n=int(input())
    all_count = sum(map(int,input().split()))
    print(ceil(all_count/n))
