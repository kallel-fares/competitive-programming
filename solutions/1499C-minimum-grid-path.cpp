/*
 * Codeforces 1499C - Minimum Grid Path
 * Rating: 1500 | Tags: brute force, data structures, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1499/C
 * Submission: https://codeforces.com/contest/1499/submission/110768846
 * Solved: 2021-03-22 (PRACTICE)
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
		vector<ll>vec(n),dp(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		ll v=0,ans=0;
		
		
		
		dp[0]=vec[0];
		dp[1]=vec[1];
		for(int i=2;i<n;i++)
		{
			dp[i]=min(vec[i],dp[i-2]);
			
		}
		
		v+=dp[0]+dp[1];
		ans=dp[0]*n+dp[1]*n;
		ll val1=n-1,val2=n-1;
		for(int i=2;i<n;i++)
		{
			v+=vec[i];
			if(val1>val2)
				val1--;
			else
				val2--;
			ans=min(ans,v+dp[i]*val2+dp[i-1]*val1);
			//cout<<(n-(i+1)/2)<<" "<<n-(i+1)/2-min(1,(i+1)%2)<<"\n";
		}
		
		
		
		cout<<ans<<"\n";
		
	
	}


}
