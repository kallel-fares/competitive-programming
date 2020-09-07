/*
 * Codeforces 1405A - Permutation Forgery
 * Rating: 800 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1405/A
 * Submission: https://codeforces.com/contest/1405/submission/92168648
 * Solved: 2020-09-07 (VIRTUAL)
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
		int n,tab[101]={0};
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i];
		for(int i=n-1;i>=0;i--)cout<<tab[i]<<" ";
		cout<<"\n";
	}

}
