/*
 * Codeforces 1362C - Johnny and Another Rating Drop
 * Rating: 1400 | Tags: bitmasks, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1362/C
 * Submission: https://codeforces.com/contest/1362/submission/111995401
 * Solved: 2021-04-04 (PRACTICE)
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
	
	
	/*vector<ll> truth(60);
	truth[0]=1;
	for(int i=1;i<=60;i++)
	{
		truth[i]=truth[i-1]*2+1;
	}*/
	
	/*for(auto x:truth)
	{
		cout<<x<<" ";
	}*/
	
	
	testc
	{
		ll n;
		ll ans=0;
		cin>>n;
		for(ll i=1;i<=n;i*=2)
		{
			if(i&n)
			{
				ans+=(i-1)*2+1;
			}
		}
		
		cout<<ans<<"\n";
		//memset(tab,0,4*(n+1));
	
	}


}
