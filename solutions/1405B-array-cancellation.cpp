/*
 * Codeforces 1405B - Array Cancellation
 * Rating: 1000 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1405/B
 * Submission: https://codeforces.com/contest/1405/submission/92170063
 * Solved: 2020-09-07 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		ll n,tab[N]={0},s=0,ans=0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i];
		for(int i=0;i<n;i++)
		{
			s+=tab[i];
			if(s<0)
			{
				ans+=abs(s);
				s=0;
			}
		}
		cout<<ans<<"\n";
		
	}

}
