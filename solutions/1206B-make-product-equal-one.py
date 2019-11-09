# Codeforces 1206B - Make Product Equal One
# Rating: 900 | Tags: dp, implementation
# Problem:    https://codeforces.com/problemset/problem/1206/B
# Submission: https://codeforces.com/contest/1206/submission/64599668
# Solved: 2019-11-09 (PRACTICE)

n=int(input())
l=list(map(int,input().split()))
s=1
t=0
rep=0
for i in range(n):
    if l[i]<-1:
        rep+=-1-l[i]
        s=s*-1
    elif l[i]>1:
        rep+=l[i]-1
        s+=s*1
    elif l[i]==0:
        t+=1
    else:
        s*=l[i]
if t==0:
    if s<0:
        rep+=2
else:
    if s<0:
        rep=rep+1+t-1
    else:
        rep=rep+t
    
print(rep)
