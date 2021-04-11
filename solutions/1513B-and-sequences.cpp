/*
 * Codeforces 1513B - AND Sequences
 * Rating: 1400 | Tags: bitmasks, combinatorics, constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1513/B
 * Submission: https://codeforces.com/contest/1513/submission/112713551
 * Solved: 2021-04-11 (PRACTICE)
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
const int mod=1e9+7;


ll facto(ll a)
{
	ll ans=1;
	while(a)
	{
		ans=(ans*a)%mod;
		a--;
	}
	return ans%mod;
}

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
		
		ll aux=1073741823;
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			aux&=a;
			freq[a]++;			
		}
		
		if(!freq[aux])
			cout<<"0\n";
		else
		{
			ll khra=facto(n-2);
			cout<<(khra*((freq[aux]*(freq[aux]-1) )%mod)) %mod<<"\n";
		}
	}


}
