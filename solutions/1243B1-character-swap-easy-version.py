# Codeforces 1243B1 - Character Swap (Easy Version)
# Rating: 1000 | Tags: strings
# Problem:    https://codeforces.com/problemset/problem/1243/B1
# Submission: https://codeforces.com/contest/1243/submission/64389036
# Solved: 2019-11-06 (CONTESTANT)

for _ in range(int(input())):
    n=int(input())
    ch1=input()
    ch2=input()
    l=[]
    for i in range(n):
        if(ch1[i]!=ch2[i]):
            l=l+[ch1[i]+ch2[i]]
    if len(l)!=2 or l[0]!=l[1]:
        print("NO")
    else:
        print("YES")
