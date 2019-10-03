# Codeforces 1234B1 - Social Network (easy version)
# Rating: 1000 | Tags: implementation
# Problem:    https://codeforces.com/problemset/problem/1234/B1
# Submission: https://codeforces.com/contest/1234/submission/61804354
# Solved: 2019-10-03 (PRACTICE)

l1=list(input().split(" "))
l=list(input().split(" "))
l2=[]
j=0


while(j<int(l1[0])):
    if l[j] not in l2:
        l2=[l[j]]+l2
        l2=l2[:int(l1[1])]
    j+=1

print(len(l2))
print(" ".join(l2))
