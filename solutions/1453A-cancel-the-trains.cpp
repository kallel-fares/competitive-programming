/*
 * Codeforces 1453A - Cancel the Trains
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1453/A
 * Submission: https://codeforces.com/contest/1453/submission/100431979
 * Solved: 2020-12-05 (PRACTICE)
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
	testc
	{
		int n,m,a,v=0,freq[102]={0};
		
		
		cin>>n>>m;
		for(int i=0;i<n;i++)cin>>a,freq[a]++;
		for(int i=0;i<m;i++)
		{
			cin>>a;
			if(freq[a])
				v++;
		}
		
		cout<<v<<"\n";
		
		
	}


}
