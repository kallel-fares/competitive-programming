# Codeforces 2A - Winner
# Rating: 1500 | Tags: hashing, implementation
# Problem:    https://codeforces.com/problemset/problem/2/A
# Submission: https://codeforces.com/contest/2/submission/76748147
# Solved: 2020-04-15 (PRACTICE)

d=dict()
l=[]
for i in range(int(input())):
    l+=[input().split()]
    try:
        d[l[i][0]]+=int(l[i][1])
    except KeyError:
        d[l[i][0]]=int(l[i][1])
d={k: v for k, v in sorted(d.items(), key=lambda item: item[1],reverse=True)}
maxi=max(d.values())
l1=[]
for i,j in d.items():
    if j==maxi:
        l1+=[i]


d=dict()
for i in l:
    try:
        d[i[0]]+=int(i[1])
    except KeyError:
        d[i[0]]=int(i[1])
    
    if d[i[0]]>=maxi and i[0] in l1:
        print(i[0])
        break
