/*
 * Codeforces 1121B - Mike and Children
 * Rating: 1200 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1121/B
 * Submission: https://codeforces.com/contest/1121/submission/97662945
 * Solved: 2020-11-04 (PRACTICE)
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
	
	int n,tab[N]={0},freq[N]={0},ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			freq[tab[i]+tab[j]]++;
		}
		
	}
	
	for(int i=3;i<=200000;i++)
	{
		ans=max(ans,freq[i]);
	}
	cout<<ans;
		


}
