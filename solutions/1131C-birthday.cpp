/*
 * Codeforces 1131C - Birthday
 * Rating: 1200 | Tags: binary search, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1131/C
 * Submission: https://codeforces.com/contest/1131/submission/97661574
 * Solved: 2020-11-04 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	map <int,int> m;
	int n,a,ans[500];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		m[a]++;
	}
	int l=0,r=0,alt=0;
	
	int i=0;
	for(auto x:m)
	{
		while(x.second>=2)
		{
			ans[n-i-1-r]=ans[i+l]=x.first;
			i++;
			x.second-=2;
		}
		if(x.second)
		{
			if(alt)
			{
				ans[i+l]=x.first;
				l++;
				alt=0;	
			}
			else
			{
				ans[n-i-1-r]=x.first;
				r++;
				alt=1;
			}
			
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	


}
