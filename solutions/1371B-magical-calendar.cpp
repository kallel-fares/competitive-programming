/*
 * Codeforces 1371B - Magical Calendar
 * Rating: 1200 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1371/B
 * Submission: https://codeforces.com/contest/1371/submission/97381302
 * Solved: 2020-11-01 (PRACTICE)
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
		ll n,r;
		cin>>n>>r;
		if(n<=r)
		{
			cout<<n*(n-1)/2+1;
		}
		else
		{
			cout<<r*(r+1)/2;
		}
		cout<<"\n";
	}


}
