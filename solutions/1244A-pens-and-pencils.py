# Codeforces 1244A - Pens and Pencils
# Rating: 800 | Tags: math
# Problem:    https://codeforces.com/problemset/problem/1244/A
# Submission: https://codeforces.com/contest/1244/submission/62638836
# Solved: 2019-10-15 (PRACTICE)

from math import ceil
for _ in range(int(input())):
    l=list(map(int,input().split()))
    x=ceil(l[0]/l[2])
    y=ceil(l[1]/l[3])
    if x+y>l[4]:
        print("-1")
    else:
        print(x,y)
