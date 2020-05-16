/*
 * Codeforces 1355A - Sequence with Digits
 * Rating: 1200 | Tags: brute force, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1355/A
 * Submission: https://codeforces.com/contest/1355/submission/80338252
 * Solved: 2020-05-16 (CONTESTANT)
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
		ll n,k;
		cin>>n>>k;
		ll min_dig=9,max_dig=0;
		ll ans=n;
		while(min_dig!=0 && k-1>0)
		{
			
			min_dig=9;
			max_dig=0;
			while(n!=0)
			{
				max_dig=max(max_dig,n%(ll)10);
				min_dig=min(min_dig,n%(ll)10);
				n/=10;
			}
			ans+=max_dig*min_dig;
			n=ans;
			k--;
		}
		
		cout<<ans<<"\n";
		
	}

}
