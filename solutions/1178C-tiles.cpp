/*
 * Codeforces 1178C - Tiles
 * Rating: 1300 | Tags: combinatorics, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1178/C
 * Submission: https://codeforces.com/contest/1178/submission/102931309
 * Solved: 2020-12-31 (PRACTICE)
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


ll binpow(ll a,ll b)
{
	if(b==0)
		return 1;
	
	ll r=binpow(a,b/2)%998244353;
	
	if(b&1)
	{
		return ((r%998244353)*(r%998244353)*a)%998244353;
	}
	else
		return (r%998244353)*(r%998244353)%998244353;
	
}




int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	ll a,b;
	cin>>a>>b;
	
	cout<<(4*binpow(2,a-1)*binpow(2,b-1))%998244353;


}
