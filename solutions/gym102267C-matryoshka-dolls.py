# Codeforces gym102267C - Matryoshka Dolls
# Rating: unrated | Tags: none
# Problem:    https://codeforces.com/gym/102267/problem/C
# Submission: https://codeforces.com/gym/102267/submission/62082705
# Solved: 2019-10-07 (PRACTICE)

from math import log
from math import ceil
l=list(map(int,input().split()))
print(max(1,int(log(l[0])/log(l[1]))+1))
