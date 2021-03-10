/*
 * Codeforces 1496B - Max and Mex
 * Rating: 1100 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1496/B
 * Submission: https://codeforces.com/contest/1496/submission/109607313
 * Solved: 2021-03-10 (CONTESTANT)
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
		
		map<ll,ll> freq;
		
		ll n,k,maxi=0;
		cin>>n>>k;
		ll ans=n;
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			freq[a]=1;
			maxi=max(maxi,a);
		}
		
		ll mex=0,v=n;
		
		while(k--)
		{
			for(int i=mex;i<=1e9;i++)
			{
				if(!freq[i])
				{
					mex=i;
					break;
				}
			}
			//cout<<mex<<" ";
			if(mex>maxi)
			{
				ans=v+k+1;
				break;
			}
			
			if((maxi+mex)/2+(maxi+mex)%2!=mex)
			{
				if(!freq[(maxi+mex)/2+(maxi+mex)%2])
					v++;
				ans=v;
				break;
			}
			else
			{
				if(!freq[(maxi+mex)/2+(maxi+mex)%2])
					v++;
				else
					break;
				
			}
			
			
		}
		cout<<ans<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
