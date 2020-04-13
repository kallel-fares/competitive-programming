/*
 * Codeforces 1339B - Sorted Adjacent Differences
 * Rating: 1200 | Tags: constructive algorithms, sortings
 * Problem:    https://codeforces.com/problemset/problem/1339/B
 * Submission: https://codeforces.com/contest/1339/submission/76441354
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
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&tab[i]);
		}
		sort(tab,tab+n);
		int mid=n/2;
		//printf("%d ",tab[mid-1]);
		if(n&1)
		{
			printf("%d ",tab[mid]);
			for(int i=mid+1;i<n;i++)
			{
				printf("%d %d ",tab[i],tab[n-i-1]);
				
				
			}
		}
		else
		{
			for(int i=mid;i<n;i++)
			{
				printf("%d %d ",tab[i],tab[n-i-1]);
				
				
			}
		}
		
		printf("\n");
		
	}


}
