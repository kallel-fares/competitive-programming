/*
 * Codeforces 1399B - Gifts Fixing
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1399/B
 * Submission: https://codeforces.com/contest/1399/submission/88990185
 * Solved: 2020-08-05 (CONTESTANT)
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
		ll s=0;
		int tab[N]={0},tab1[N]={0},n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>tab1[i];
		}
		
		int maxi=tab[0];
		int maxi1=tab1[0];
		for(int i=1;i<n;i++)
		{
			maxi=min(maxi,tab[i]);
		}
		
		for(int i=1;i<n;i++)
		{
			maxi1=min(maxi1,tab1[i]);
		}
		
		for(int i=0;i<n;i++)
		{
			s+=max(tab[i]-maxi,tab1[i]-maxi1);
	
		}
		
		cout<<s<<"\n";
		
		
	}

}
