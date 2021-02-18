/*
 * Codeforces 1486A - Shifting Stacks
 * Rating: 900 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1486/A
 * Submission: https://codeforces.com/contest/1486/submission/107786150
 * Solved: 2021-02-18 (CONTESTANT)
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
		int n,v=0;
		cin>>n;
		vector<ll> vec(n);
		for(int i=0;i<n;i++)
			cin>>vec[i];
			
		ll r=0;
		for(int i=0;i<n;i++)
		{
			if(vec[i]+r<i)
			{
				v=1;
			}
			r+=vec[i]-i;
		}
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	
	}


}
