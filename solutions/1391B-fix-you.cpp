/*
 * Codeforces 1391B - Fix You
 * Rating: 800 | Tags: brute force, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1391/B
 * Submission: https://codeforces.com/contest/1391/submission/90539465
 * Solved: 2020-08-21 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	testc
	{
		int n,m,s=0;
		string tab[101];
		cin>>n>>m;
		for(int i=0;i<n;i++)
			cin>>tab[i];
		
		for(int i=0;i<n;i++)
		{
			if(tab[i][m-1]=='R')
				s++;
		}
		for(int i=0;i<m;i++)
			if(tab[n-1][i]=='D')
				s++;
		cout<<s<<"\n";
	}

}
