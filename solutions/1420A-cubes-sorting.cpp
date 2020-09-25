/*
 * Codeforces 1420A - Cubes Sorting
 * Rating: 900 | Tags: math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1420/A
 * Submission: https://codeforces.com/contest/1420/submission/93806491
 * Solved: 2020-09-25 (VIRTUAL)
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
		int n,v=0,tab[N]={0};
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		for(int i=0;i<n-1;i++)
		{
			if(tab[i]<=tab[i+1])
				v=1;
		}
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

}
