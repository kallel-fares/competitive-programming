/*
 * Codeforces 1342A - Road To Zero
 * Rating: 1000 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1342/A
 * Submission: https://codeforces.com/contest/1342/submission/78225290
 * Solved: 2020-04-26 (PRACTICE)
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
	ll x,y,a,b;
	testc
	{
		cin>>x>>y;
		cin>>a>>b;
		ll mini=min(x,y),maxi=max(x,y);
		
			
			
		if(a<=b/2)
			cout<<(x+y)*a<<"\n";
		else
			cout<<(maxi-mini)*a+mini*b<<"\n";

			
	}


}
