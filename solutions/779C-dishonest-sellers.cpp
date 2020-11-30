/*
 * Codeforces 779C - Dishonest Sellers
 * Rating: 1200 | Tags: constructive algorithms, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/779/C
 * Submission: https://codeforces.com/contest/779/submission/100061927
 * Solved: 2020-11-30 (PRACTICE)
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
	vector<pair<int,pair<int,int>>> v;
	
	int n,k,ans=0,tab[N],tab1[N];
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>tab[i];
	
	for(int i=0;i<n;i++)cin>>tab1[i];
	
	
	for(int i=0;i<n;i++)
	{
		if(tab[i]<tab1[i])
		{
			ans+=tab[i];
			k--;
		}
		else
			v.pb(make_pair(abs(tab[i]-tab1[i]),make_pair(tab[i],tab1[i])));
		
	}
	sort(v.begin(),v.end());
	
	/*for(int i=0;i<n;i++)
	{
		cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<"\n";
	}
	*/
	
	for(int i=0;i<v.size();i++)
	{
		if(k>0)
			ans+=v[i].second.first,k--;
		else
			ans+=min(v[i].second.first,v[i].second.second);

	}
	
	cout<<ans<<"\n";


}
