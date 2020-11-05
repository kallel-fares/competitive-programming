/*
 * Codeforces 1076B - Divisor Subtraction
 * Rating: 1200 | Tags: implementation, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1076/B
 * Submission: https://codeforces.com/contest/1076/submission/97728837
 * Solved: 2020-11-05 (PRACTICE)
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
	
	ll n;
	cin>>n;
	ll ans=1;
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			ans=1+(n-i)/2;
			break;
		}
	}
	cout<<ans;

}
