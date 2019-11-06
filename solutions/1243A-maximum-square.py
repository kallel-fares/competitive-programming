# Codeforces 1243A - Maximum Square
# Rating: 800 | Tags: implementation
# Problem:    https://codeforces.com/problemset/problem/1243/A
# Submission: https://codeforces.com/contest/1243/submission/64383291
# Solved: 2019-11-06 (CONTESTANT)

for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort(reverse=True)
    i=n-1
    while i>=l[i]:
        i-=1
    print(i+1)
