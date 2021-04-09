/*
 * Codeforces 1320A - Journey Planning
 * Rating: 1400 | Tags: data structures, dp, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1320/A
 * Submission: https://codeforces.com/contest/1320/submission/112385696
 * Solved: 2021-04-09 (PRACTICE)
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

		ll n,ans=0;
		cin>>n;
		
		map<ll,ll>freq;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			freq[a-i]+=a;
			ans=max(ans,freq[a-i]);
		}
		cout<<ans<<"\n";
	


}
