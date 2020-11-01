/*
 * Codeforces 1392C - Omkar and Waterslide
 * Rating: 1200 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1392/C
 * Submission: https://codeforces.com/contest/1392/submission/97351243
 * Solved: 2020-11-01 (PRACTICE)
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
const int INF=1e9+1;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		ll n,maxi,mini=INF,ans=0;
		int tab[N]={0};
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i];
		
		maxi=tab[0];
		for(int i=1;i<n;i++)
		{
			maxi=max(maxi,ans+(ll)tab[i]);
			if(ans+tab[i]!=maxi)
			{
				ans+=maxi-(tab[i]+ans);
			}
			
			
		}
		cout<<ans<<"\n";
	}


}
