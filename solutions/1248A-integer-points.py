# Codeforces 1248A - Integer Points
# Rating: 1000 | Tags: geometry, math
# Problem:    https://codeforces.com/problemset/problem/1248/A
# Submission: https://codeforces.com/contest/1248/submission/62996027
# Solved: 2019-10-20 (CONTESTANT)

from math import ceil
for _ in range(int(input())):
    s=0
    imp=0
    p=0
    imp1=0
    p1=0
    
    n=int(input())
    l=list(map(int,input().split()))
    r=int(input())
    l1=list(map(int,input().split()))
    for x in l:
        if x%2==0:
            p+=1
        else:
            imp+=1
    for x in l1:
        if x%2==0:
            p1+=1
        else:
            imp1+=1
                   
    print(p*p1+imp*imp1)
