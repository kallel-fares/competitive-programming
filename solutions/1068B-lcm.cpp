/*
 * Codeforces 1068B - LCM
 * Rating: 1200 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1068/B
 * Submission: https://codeforces.com/contest/1068/submission/97741237
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
	ll n,ans=0;
	cin>>n;
	ll i=0;
	for(i=1;i*i<n;i++)
	{
		if(n%i==0)
		{
			ans+=2;
		}
	}
	if(i*i==n)
		ans++;
	cout<<ans;

}
