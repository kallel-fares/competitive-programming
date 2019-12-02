# Codeforces 1208A - XORinacci
# Rating: 900 | Tags: math
# Problem:    https://codeforces.com/problemset/problem/1208/A
# Submission: https://codeforces.com/contest/1208/submission/66170093
# Solved: 2019-12-02 (PRACTICE)

for _ in range(int(input())):
    l=list(map(int,input().split()))
    if l[2]%3==0:
        print(l[0])
    elif l[2]%3==1:
        print(l[1])
    else:
        print(l[0]^l[1])
