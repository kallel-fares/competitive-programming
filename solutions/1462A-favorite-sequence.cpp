/*
 * Codeforces 1462A - Favorite Sequence
 * Rating: 800 | Tags: implementation, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1462/A
 * Submission: https://codeforces.com/contest/1462/submission/101290810
 * Solved: 2020-12-15 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=500;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int tab[N]={0},n;
		cin>>n;
		
		
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		for(int i=0;i<n/2;i++)
		{
			cout<<tab[i]<<" "<<tab[n-i-1]<<" ";
		}
		if(n&1)
			cout<<tab[n/2];
		
		cout<<"\n";
	}


}
