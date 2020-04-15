/*
 * Codeforces 1337A - Ichihime and Triangle
 * Rating: 800 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1337/A
 * Submission: https://codeforces.com/contest/1337/submission/76844827
 * Solved: 2020-04-15 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;scanf("%d",&t);while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	testc
	{
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		int maxi=max(a,max(b,c));
		if(maxi==a)
		{
			printf("%d %d %d\n",a,min(c,maxi),min(d,maxi));
			continue;
		}
		if(maxi==b)
		{
			printf("%d %d %d\n",b,b,min(c,maxi));
			continue;
		}
		if(maxi==c)
		{
			printf("%d %d %d\n",min(a,maxi),c,c);
			continue;
		}
		
	}


}
