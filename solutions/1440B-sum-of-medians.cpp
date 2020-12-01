/*
 * Codeforces 1440B - Sum of Medians
 * Rating: 900 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1440/B
 * Submission: https://codeforces.com/contest/1440/submission/100142921
 * Solved: 2020-12-01 (PRACTICE)
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
		ll n,k,ans=0,tab[N]={0};
		cin>>n>>k;
		for(int i=0;i<n*k;i++)cin>>tab[i];
		
		/*if(n<3)
		{
			for(int i=0;i<n*k;i+=n)
			{
				ans+=tab[i];
			}
		}
		else
		{*/
			for(int i=(n/2-(n+1)%2)*k;i<n*k;i+=n/2+1)
			{
				ans+=tab[i];
			}
	//	}
		
		cout<<ans<<"\n";
		
		
	}


}
