/*
 * Codeforces 1374D - Zero Remainder Array
 * Rating: 1400 | Tags: math, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1374/D
 * Submission: https://codeforces.com/contest/1374/submission/109165102
 * Solved: 2021-03-05 (PRACTICE)
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
		ll n,k,v=0,maxi=0;
		cin>>n>>k;
		
		map<ll,ll> freq;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a%k!=0)
				freq[k-a%k]++;
		}
		
		ll ans=0;
		
		
		/*for(int i=0;i<k;i++)
		{
			cout<<freq[i]<<" ";
		}
		cout<<"\n";*/
		
		
		for(auto x:freq)
		{
			if(x.second>=maxi)
			{
				ans=x.first+k*(x.second-1)+1;
				maxi=x.second;
			}
				
		}
		cout<<ans<<"\n";
	
	}


}
