/*
 * Codeforces 1324A - Yet Another Tetris Problem
 * Rating: 900 | Tags: implementation, number theory
 * Problem:    https://codeforces.com/problemset/problem/1324/A
 * Submission: https://codeforces.com/contest/1324/submission/79103858
 * Solved: 2020-05-06 (VIRTUAL)
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
		int tab[N];
		int n,mini=9000,s=0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i],mini=min(tab[i],mini);
		for(int i=0;i<n;i++)
		{
			if((tab[i]-mini)&1)
			{
				s++;
			}
		}
		if(s==n || s==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
