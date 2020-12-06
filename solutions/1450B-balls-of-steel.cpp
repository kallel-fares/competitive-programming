/*
 * Codeforces 1450B - Balls of Steel
 * Rating: 1000 | Tags: brute force, geometry, greedy
 * Problem:    https://codeforces.com/problemset/problem/1450/B
 * Submission: https://codeforces.com/contest/1450/submission/100548832
 * Solved: 2020-12-06 (CONTESTANT)
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
	testc
	{
		int n,k,x,y,ans=0;
		vector < pair <int,int> > v;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			v.pb(make_pair(x,y));
		}
		
		
		for(int i=0;i<n;i++)
		{
			int m=0;
			for(int j=0;j<n;j++)
			{
				if(abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second)<=k && i!=j)
				{
					m++;
				}
			}
			if(m==n-1)
			{
			//	cout<<i<<" ";
				ans=1;
			}
		}
		if(ans)
		{
			cout<<"1\n";
		}
		else
			cout<<"-1\n";
	}


}
