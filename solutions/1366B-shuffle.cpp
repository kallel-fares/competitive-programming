/*
 * Codeforces 1366B - Shuffle
 * Rating: 1300 | Tags: math, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1366/B
 * Submission: https://codeforces.com/contest/1366/submission/108086888
 * Solved: 2021-02-21 (PRACTICE)
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

	//freopen("","r",stdin);
	testc
	{
		int n,x,m;
		cin>>n>>x>>m;
		
		int mini=x,maxi=x;
		
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			if(maxi<a || mini>b)
				continue;
			else
			{
				maxi=max(maxi,b);
				mini=min(mini,a);	
			}
		}
		
		cout<<maxi-mini+1<<"\n";
	
	}


}
