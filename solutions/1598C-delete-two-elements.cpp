/*
 * Codeforces 1598C - Delete Two Elements
 * Rating: 1200 | Tags: data structures, dp, implementation, math, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1598/C
 * Submission: https://codeforces.com/contest/1598/submission/131456702
 * Solved: 2021-10-10 (PRACTICE)
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
		ll n;
		cin>>n;
		
		map<ll,ll> freq;
		
		ll val=0;
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			freq[a]++;
			val+=a;	
		}
		
		val*=2;
		ll ans=0;
		if(val%n!=0)
			cout<<"0\n";
		else
		{
			val/=n;
			
			for(auto x:freq)
			{
				if(x.first<=val)
				{
					if(x.first*2==val)
					{
						ans+=x.second*(x.second-1);
					}
					else
						ans+=x.second*freq[val-x.first];
				}
			}
			
			
			cout<<ans/2<<"\n";
			
		}
			
		
		
	}


}
