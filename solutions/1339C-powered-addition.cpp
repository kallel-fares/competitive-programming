/*
 * Codeforces 1339C - Powered Addition
 * Rating: 1500 | Tags: bitmasks, brute force, greedy
 * Problem:    https://codeforces.com/problemset/problem/1339/C
 * Submission: https://codeforces.com/contest/1339/submission/76443672
 * Solved: 2020-04-13 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;scanf("%d",&t);while(t--)
#include <bits/stdc++.h>
using namespace std;

map<int,int>m;
vector <pair<int,int>>start;
const int N=1e5+2;
int main ()
{
	testc
	{
		
		int tab[N];
		int n,dif=0,maxi=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&tab[i]);
		}
		maxi=tab[0];
		for(int i=1;i<n;i++)
		{
			maxi=max(maxi,tab[i]);
			if(maxi>tab[i])
			{
				dif=max(dif,abs(tab[i]-maxi));
				
			}
		}
		
		//printf("%d",dif);
		int j=1,s=0;
		while(dif>0)
		{
			s++;
			dif-=j;
			j*=2;
		}
		printf("%d\n",s);
		
	}


}
