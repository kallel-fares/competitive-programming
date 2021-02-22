/*
 * Codeforces 1371C - A Cookie for You
 * Rating: 1300 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1371/C
 * Submission: https://codeforces.com/contest/1371/submission/108201133
 * Solved: 2021-02-22 (PRACTICE)
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
		ll a,b,n,m;
		cin>>a>>b>>n>>m;
		ll mini=min(a,b),maxi=max(a,b);
		
		
		if(mini>=m && maxi+mini>=n+m)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
		
	
	}


}
