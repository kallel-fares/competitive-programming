/*
 * Codeforces 1519B - The Cake Is a Lie
 * Rating: 800 | Tags: dp, math
 * Problem:    https://codeforces.com/problemset/problem/1519/B
 * Submission: https://codeforces.com/contest/1519/submission/114560629
 * Solved: 2021-04-29 (CONTESTANT)
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
		ll n,m,k;
		cin>>n>>m>>k;
		
		if(k==n-1+n*(m-1))
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	
	}


}
