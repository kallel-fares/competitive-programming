/*
 * Codeforces 1369C - RationalLee
 * Rating: 1400 | Tags: greedy, math, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1369/C
 * Submission: https://codeforces.com/contest/1369/submission/109220158
 * Solved: 2021-03-06 (PRACTICE)
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
		int n,k;
		cin>>n>>k;
		vector<ll> vec(n);
		vector<ll> aux;
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		sort(vec.begin(),vec.end());
		
		ll ans=0;
		int v=0;
		for(int i=0;i<k;i++)
		{
			ll a;
			cin>>a;
			if(a==1)
			{
				v++;
			}
			else
			{
				if(a-2)
					aux.pb(a-2);
			}
		}
		
		sort(aux.begin(),aux.end(),greater<ll>());
		int i=0;
		for(auto x:aux)
		{
			i++;
			while(x--)
			{
				//cout<<vec[i]<<" ";
				vec[i]=0;
				i++;
			}
		}
		
		/*for(auto x:vec)
			cout<<x<<" ";
		cout<<"\n";*/
		
		for(i=n-1;i>=0;i--)
		{
			if(v)
			{
				ans+=vec[i];
				v--;
				
			}
			ans+=vec[i];

		}
		
		cout<<ans<<"\n";
		
		
		
		
		
		
		
		
		
	}


}
