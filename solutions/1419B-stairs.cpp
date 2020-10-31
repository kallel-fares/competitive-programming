/*
 * Codeforces 1419B - Stairs
 * Rating: 1200 | Tags: brute force, constructive algorithms, greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1419/B
 * Submission: https://codeforces.com/contest/1419/submission/97262304
 * Solved: 2020-10-31 (PRACTICE)
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
		ll big,ans=0;
		cin>>big;
		
		
		ll val=1;
		ll i=1;
		
		while(big-val>=0)
		{
			big-=val;
			
			//cout<<val<<" ";
			i*=2;
			ans++;
			val=val*2+i*i;
			
		}
		
		cout<<ans<<"\n";
	}


}
