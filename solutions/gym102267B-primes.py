# Codeforces gym102267B - Primes
# Rating: unrated | Tags: none
# Problem:    https://codeforces.com/gym/102267/problem/B
# Submission: https://codeforces.com/gym/102267/submission/62055145
# Solved: 2019-10-07 (PRACTICE)

from math import sqrt
from math import ceil
l=int(input())

def prime(x):
    if x<=1:
        return False
    else:        
        for i in range(2,ceil(sqrt(x))+1):
            if x%i==0:
                return  False
        return True
if prime(l-2)==True:
    print("2",l-2)
else:
    print("-1")
