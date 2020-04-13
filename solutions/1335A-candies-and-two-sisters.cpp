/*
 * Codeforces 1335A - Candies and Two Sisters
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1335/A
 * Submission: https://codeforces.com/contest/1335/submission/76508385
 * Solved: 2020-04-13 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;scanf("%d",&t);while(t--)


#include <bits/stdc++.h>
using namespace std;


int tab[2000][2];
int main ()
{
	int n;
	testc
	{
		scanf("%d",&n);
		printf("%d\n",n&1?n/2:n/2-1);
	}	
		
}
