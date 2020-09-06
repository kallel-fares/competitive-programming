/*
 * Codeforces 1409B - Minimum Product
 * Rating: 1100 | Tags: brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1409/B
 * Submission: https://codeforces.com/contest/1409/submission/92007391
 * Solved: 2020-09-06 (PRACTICE)
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
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		
		ll v=max(a-n,x);
		ll d=n-abs(v-a);
		ll r=v*max(b-d,y);
	
		v=max(b-n,y);
		d=n-abs(v-b);
		a=max(a-d,x);
		//cout<<r<<" "<<v*a<<"\n";
		cout<<min(r,v*a)<<"\n";
		
		
		
		
	}

}
