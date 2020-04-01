# Codeforces 1331C - ...And after happily lived ever they
# Rating: unrated | Tags: *special, bitmasks
# Problem:    https://codeforces.com/problemset/problem/1331/C
# Submission: https://codeforces.com/contest/1331/submission/75186238
# Solved: 2020-04-01 (PRACTICE)


def binaryToDecimal(binary): 
      
    binary1 = binary 
    decimal, i, n = 0, 0, 0
    while(binary != 0): 
        dec = binary % 10
        decimal = decimal + dec * pow(2, i) 
        binary = binary//10
        i += 1
    print(decimal)

a=int(input()) 
b=bin(a).replace('0b','')
b=(6-len(b))*'0'+b
ch=list('0'*6)
ch[0]=b[0]
ch[1]=b[5]
ch[2]=b[3]
ch[3]=b[2]
ch[4]=b[4]
ch[5]=b[1]
ch="".join(ch)
binaryToDecimal(int(ch))
