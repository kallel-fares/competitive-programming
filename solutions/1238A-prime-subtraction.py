# Codeforces 1238A - Prime Subtraction
# Rating: 900 | Tags: math, number theory
# Problem:    https://codeforces.com/problemset/problem/1238/A
# Submission: https://codeforces.com/contest/1238/submission/62128384
# Solved: 2019-10-08 (CONTESTANT)

t=int(input())
for i in range (t):
    l=list(map(int,input().split()))
    if(l[0]-l[1]==1):
        print("NO")
    else:
        print("YES")
