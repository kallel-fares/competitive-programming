/*
 * Codeforces 1203C - Common Divisors
 * Rating: 1300 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1203/C
 * Submission: https://codeforces.com/contest/1203/submission/79980185
 * Solved: 2020-05-13 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;



const int N=4e5+1;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	ll tab[N]={0};
	
	cin>>n;
	for(int i=0;i<n;i++)cin>>tab[i];
	ll g=tab[0];
	for(int i=1;i<n;i++)
	{
		g=__gcd(tab[i],g);
	}
	ll ans=1;
	for(ll i=2;i*i<=g;i++)
	{
		ll s=1;
		while(g%i==0)
		{
			s++;
			g/=i;
		}
		ans*=s;
		
	}
	if(g>1)
		ans*=2;
	cout<<ans;
	

}
