/*
 * Codeforces 1350B - Orac and Models
 * Rating: 1400 | Tags: dp, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1350/B
 * Submission: https://codeforces.com/contest/1350/submission/99921545
 * Solved: 2020-11-29 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int dp[N]={0},n,tab[N]={0},ans=1;
		
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>tab[i],dp[i]=1;
		}
		
		for(int i=2;i<=n;i++)
		{
			
			for(int j=1;j*j<=i;j++)
			{
				if(i%j==0)
				{
					if(tab[j]<tab[i])
					{
						dp[i]=max(dp[i],1+dp[j]);	
					}
					
					if(tab[i/j]<tab[i])
					{
						dp[i]=max(dp[i],1+dp[i/j]);	
					}
					
					ans=max(ans,dp[i]);
				}
			}
			//cout<<dp[i]<<" ";
		}
		cout<<ans<<"\n";
		
		
	}


}
