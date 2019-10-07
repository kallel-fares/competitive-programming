# Codeforces gym102267H - Circle of Polygon
# Rating: unrated | Tags: none
# Problem:    https://codeforces.com/gym/102267/problem/H
# Submission: https://codeforces.com/gym/102267/submission/62083361
# Solved: 2019-10-07 (PRACTICE)

import math
l=list(map(int,input().split()))
angle=2*math.pi/l[0]
r=l[1]/(2*math.sin(angle/2))
print(r**2*math.pi)
