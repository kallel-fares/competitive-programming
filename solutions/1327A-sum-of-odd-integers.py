# Codeforces 1327A - Sum of Odd Integers
# Rating: 1100 | Tags: math
# Problem:    https://codeforces.com/problemset/problem/1327/A
# Submission: https://codeforces.com/contest/1327/submission/75448062
# Solved: 2020-04-04 (PRACTICE)

from math import log2
for _ in int(input())*[0]:
    n,k=map(int,input().split())
    if n-k<0 or (n-k)%2==1:
        print("NO")
    else:
        if (n-k)//2>=(k*(k-1))//2:
            print("YES")
        else:
            print("NO")
