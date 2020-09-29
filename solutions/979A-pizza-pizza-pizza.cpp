/*
 * Codeforces 979A - Pizza, Pizza, Pizza!!!
 * Rating: 1000 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/979/A
 * Submission: https://codeforces.com/contest/979/submission/94250890
 * Solved: 2020-09-30 (PRACTICE)
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
	ll n;
	cin>>n;
	if(n==0)
	{
		cout<<0;
		return 0;
	}
	
	
		
	if(!((n+1)&1))
		cout<<(n+1)/2;
	else
		cout<<n+1;

}
