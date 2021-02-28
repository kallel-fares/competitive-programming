/*
 * Codeforces 1491C - Pekora and Trampoline
 * Rating: 1700 | Tags: brute force, data structures, dp, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1491/C
 * Submission: https://codeforces.com/contest/1491/submission/108749361
 * Solved: 2021-02-28 (PRACTICE)
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
		vector<ll> vec(n),dp(n);
		
		ll ans=0,rest=0;
		
		for(int i=0;i<n;i++)
			cin>>vec[i];
		
		for(int i=2;i<n;i++)
		{
			dp[i]=rest;
			for(int j=i-2;j>=0;j--)
			{
				if(i-j<=vec[j])
				{
					dp[i]++;
					//cout<<"hello";
				}
					
			}
			rest=max(dp[i]-(vec[i]-1),(ll)0);
			dp[i]=dp[i]-rest;
			
		}
		
		
		/*for(auto x:vec)
			cout<<x<<" ";
		cout<<"\n";
		for(auto x:dp)
			cout<<x<<" ";
		cout<<"\n";*/
		
		for(int i=0;i<n;i++)
			ans+=vec[i]-1-dp[i];
		cout<<ans<<"\n";
		//cout<<"\n";
	
	}


}
