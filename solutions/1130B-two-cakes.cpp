/*
 * Codeforces 1130B - Two Cakes
 * Rating: 1200 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1130/B
 * Submission: https://codeforces.com/contest/1130/submission/101046044
 * Solved: 2020-12-12 (PRACTICE)
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
	int n;
	
	map <int,pair<int,int>> vect;
	cin>>n;
	
	
	for(int i=1;i<=n*2;i++)
	{
		int a;
		cin>>a;
		if(!vect[a].first)
			vect[a].first=i;
		else
			vect[a].second=i;
		
	}
	/*	
	for(int i=1;i<=n*2;i++)
	{
		int a;
		cin>>a;
		if(!vect[a].first)
			vect[a].first=i;
		else
			vect[a].second=i;
		
	}*/
	
	ll ans=0;
	ans+=vect[1].first+vect[1].second-2;
	for(int i=2;i<=n;i++)
	{
		ans+=min(abs(vect[i-1].first-vect[i].first)+abs(vect[i-1].second-vect[i].second),abs(vect[i-1].first-vect[i].second)+abs(vect[i-1].second-vect[i].first));               
		
	}
	cout<<ans;
	
	


}
