/*
 * Codeforces 1426B - Symmetric Matrix
 * Rating: 900 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1426/B
 * Submission: https://codeforces.com/contest/1426/submission/94359585
 * Solved: 2020-09-30 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,m,v=0,a,b,a1,b1;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			cin>>a1>>b1;
			if(a1==b)
				v=1;
		}
		if(v && !(m&1))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}

}
