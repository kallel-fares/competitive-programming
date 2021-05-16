/*
 * Codeforces 1520D - Same Differences
 * Rating: 1200 | Tags: data structures, hashing, math
 * Problem:    https://codeforces.com/problemset/problem/1520/D
 * Submission: https://codeforces.com/contest/1520/submission/116409624
 * Solved: 2021-05-16 (PRACTICE)
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
		int n;
		cin>>n;
		
		map<ll,ll> freq;
		
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			freq[a-i]++;
		}	
		
		ll ans=0;
		
		for(auto x:freq)
		{
			//cout<<x<<" ";
			ans+=(x.second*(x.second-1))/2;	
		}
		
		cout<<ans<<"\n";
		
	
	}


}
