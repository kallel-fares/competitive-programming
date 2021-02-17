/*
 * Codeforces 1090A - Company Merging
 * Rating: 1300 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1090/A
 * Submission: https://codeforces.com/contest/1090/submission/107721119
 * Solved: 2021-02-17 (PRACTICE)
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
	
	int n;
	
	cin>>n;
	vector<pair<ll,ll>> ans;
	ll ultmaxi=0;
	for(int i=0;i<n;i++)
	{
		ll b,a,maxi=0;
		cin>>b;
		for(int j=0;j<b;j++)
		{
			cin>>a;
			maxi=max(maxi,a);
			ultmaxi=max(maxi,ultmaxi);
		}
		ans.pb(make_pair(maxi,b));
	}
	ll v=0;
	for(auto x:ans)
	{
		v+=x.second*(ultmaxi-x.first);
	}
	cout<<v;

}
