# Codeforces 1236A - Stones
# Rating: 800 | Tags: brute force, greedy, math
# Problem:    https://codeforces.com/problemset/problem/1236/A
# Submission: https://codeforces.com/contest/1236/submission/62957163
# Solved: 2019-10-19 (PRACTICE)

for _ in range(int(input())):
    s=0
    l=list(map(int,input().split()))
    while l[1]<int(l[2]/2):
        l[2]-=2
    s=int(l[2]/2)*3
    l[1]=l[1]-int(l[2]/2)
    while l[0]<int(l[1]/2):
        l[1]-=2
    s+=int(l[1]/2)*3
    print(int(s))
