# Codeforces 1296B - Food Buying
# Rating: 900 | Tags: math
# Problem:    https://codeforces.com/problemset/problem/1296/B
# Submission: https://codeforces.com/contest/1296/submission/73137860
# Solved: 2020-03-13 (PRACTICE)

for _ in int(input())*[0]:
    x=int(input())
    s=x
    while x//10!=0:
        s+=x//10
        x=x//10+x%10
    print(s)
