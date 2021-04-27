/*
 * Codeforces 1514B - AND 0, Sum Big
 * Rating: 1200 | Tags: bitmasks, combinatorics, math
 * Problem:    https://codeforces.com/problemset/problem/1514/B
 * Submission: https://codeforces.com/contest/1514/submission/114396665
 * Solved: 2021-04-27 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

ll p(ll a,ll b)
{
	ll ans=1;
	
	while(b)
	{
		if(b&1)
			ans=(ans*a)%mod;
		
		a=(a*a)%mod;
		b/=2;
			
			
		
	}
	return ans;
	
	
}



int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int a,b;
		cin>>a>>b;
		
		cout<<p(a,b)<<"\n";
	
	}


}
