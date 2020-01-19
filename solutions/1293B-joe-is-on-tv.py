# Codeforces 1293B - JOE is on TV!
# Rating: 1000 | Tags: combinatorics, greedy, math
# Problem:    https://codeforces.com/problemset/problem/1293/B
# Submission: https://codeforces.com/contest/1293/submission/69101637
# Solved: 2020-01-19 (CONTESTANT)

a=int(input())
s=0
for i in range(a):
    s+=1/(i+1)
print(s)
