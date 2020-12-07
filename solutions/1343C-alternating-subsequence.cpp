/*
 * Codeforces 1343C - Alternating Subsequence
 * Rating: 1200 | Tags: dp, greedy, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1343/C
 * Submission: https://codeforces.com/contest/1343/submission/100634789
 * Solved: 2020-12-07 (PRACTICE)
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
		ll n,tab[N]={0};
		ll ans=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		tab[n]=-tab[n-1];
		for(int i=0;i<n;i++)
		{
			ll maxi=tab[i];
			
			while(tab[i]*tab[i+1]>0)
			{
				maxi=max(maxi,tab[i]);
				i++;
			}
			//cout<<maxi<<" ";
			ans+=max(maxi,tab[i]);
		}
		
		cout<<ans<<"\n";
	}


}
