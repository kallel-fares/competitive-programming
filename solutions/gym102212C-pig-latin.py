# Codeforces gym102212C - Pig Latin
# Rating: unrated | Tags: none
# Problem:    https://codeforces.com/gym/102212/problem/C
# Submission: https://codeforces.com/gym/102212/submission/62313821
# Solved: 2019-10-10 (PRACTICE)

for _ in range(int(input())):
    l=list(input().split())
    l[0]=l[0][1:len(l[0]):]+l[0][0].lower()+"ay"
    l[0]=l[0][0].upper()+l[0][1::]
    s=l[0]
    for _z in l[1::]:
        s=s+" "+_z[1:len(_z):]+_z[0].lower()+"ay"
    print(s)
