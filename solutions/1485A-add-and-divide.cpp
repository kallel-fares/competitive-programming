/*
 * Codeforces 1485A - Add and Divide
 * Rating: 1000 | Tags: brute force, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1485/A
 * Submission: https://codeforces.com/contest/1485/submission/107238516
 * Solved: 2021-02-12 (PRACTICE)
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
		ll a,b;
		cin>>a>>b;
		int ans=0,rep=0;
		
		
	
		ll mini=2e9;
		for(ll i=max((ll)2,b);i<=b+20;i++)
		{
			ll aux=a,ans=0;
			while(aux!=0)
			{
				//cout<<a<<" "<<b<<"\n";
				aux/=i;
				
				
				ans++;
			}
			//cout<<i<<" "<<ans<<" ";
			//cout<<mini<<" ";
			mini=min(mini,i+ans);
		}
		//cout<<
		cout<<mini-b<<"\n";
	}


}
