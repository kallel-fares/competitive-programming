/*
 * Codeforces 1517A - Sum of 2050
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1517/A
 * Submission: https://codeforces.com/contest/1517/submission/113988778
 * Solved: 2021-04-23 (CONTESTANT)
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
		
		ll aux=2050000000000000000;
		
		ll ans=0;
		
		while(aux>=2050)
		{
			ans+=n/aux;
			n%=aux;
			aux/=10;
		}
		
		if(n)
			cout<<"-1\n";
		else
			cout<<ans<<"\n";
	
	}


}
