/*
 * Codeforces 1475C - Ball in Berland
 * Rating: 1400 | Tags: combinatorics, graphs, math
 * Problem:    https://codeforces.com/problemset/problem/1475/C
 * Submission: https://codeforces.com/contest/1475/submission/106143470
 * Solved: 2021-01-31 (PRACTICE)
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

	//freopen("","r",stdin);
	testc
	{
		
		ll a,b,k;
		cin>>a>>b>>k;
		//vector<int> vec1(k),vec2(k);
		map<int,ll>freq,freq2;
		
		
		ll ans=1,f;
		
		ans=(k*(k-1))/2;
		//cout<<ans<<" ";
		
		
		int count=0;
		for(int i=0;i<k;i++)
		{
			cin>>f;
			
			freq[f]++;
		}
		
		for(int i=0;i<k;i++)
		{
			cin>>f;
			
			freq2[f]++;
		}
		
		for(auto x:freq)
		{
			ans-=(x.second*(x.second-1))/2;
		}
		
		for(auto x:freq2)
		{
			ans-=(x.second*(x.second-1))/2;
		}
		
		cout<<ans<<"\n";
	}


}
