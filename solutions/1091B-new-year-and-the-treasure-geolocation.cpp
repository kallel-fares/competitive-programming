/*
 * Codeforces 1091B - New Year and the Treasure Geolocation
 * Rating: 1200 | Tags: brute force, constructive algorithms, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1091/B
 * Submission: https://codeforces.com/contest/1091/submission/101202373
 * Solved: 2020-12-14 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=1000;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	pair<int,int> mini=make_pair(10000000,10000000);
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==mini.first)
		{
			
			mini.second=min(mini.second,b);
			
		}
		
		if(a<mini.first)
		{
			mini.first=a;
			mini.second=b;
		}
		
		
	}
	
	pair<int,int> maxi=make_pair(-10000000,-10000000);
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==maxi.first)
		{
			
			maxi.second=max(maxi.second,b);
			
		}
		
		if(a>maxi.first)
		{
			maxi.first=a;
			maxi.second=b;
		}
		
	}
	
	cout<<maxi.first+mini.first<<" "<<maxi.second+mini.second;


}
