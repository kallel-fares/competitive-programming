# Codeforces 1247A - Forgetting Things
# Rating: 900 | Tags: math
# Problem:    https://codeforces.com/problemset/problem/1247/A
# Submission: https://codeforces.com/contest/1247/submission/63454642
# Solved: 2019-10-26 (CONTESTANT)

r,l=map(int,input().split())
if r-l==-1:
    print(r,l)
elif r-l==0:
    print(r*10," ",l*10+1)
elif r-l==8:
    print(r,l*10)
else:
    print(-1)
