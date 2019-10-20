# Codeforces 1248B - Grow The Tree
# Rating: 900 | Tags: greedy, math, sortings
# Problem:    https://codeforces.com/problemset/problem/1248/B
# Submission: https://codeforces.com/contest/1248/submission/62998717
# Solved: 2019-10-20 (CONTESTANT)

from math import ceil
leng=int(input())
l=list(map(int,input().split()))
l=sorted(l)
print(sum(l[int(leng/2):])**2+sum(l[:int(leng/2)])**2)
