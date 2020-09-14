/*
 * Codeforces 1033B - Square Difference
 * Rating: 1100 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1033/B
 * Submission: https://codeforces.com/contest/1033/submission/92854091
 * Solved: 2020-09-14 (PRACTICE)
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
		ll a,b,v=0;
		cin>>a>>b;
		if(a-b!=1)
		{
			cout<<"NO\n";
			continue;
		}
			
		for(ll i=2;i*i<=a+b;i++)
		{
			if((a+b)%i==0)
			{
			    cout<<"NO\n";
			    v=1;
			    break;
			}
				
		}
		
		if(!v)
			cout<<"YES\n";
		
		
		
	}

}
