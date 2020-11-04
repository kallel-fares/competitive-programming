/*
 * Codeforces 1174B - Ehab Is an Odd Person
 * Rating: 1200 | Tags: sortings
 * Problem:    https://codeforces.com/problemset/problem/1174/B
 * Submission: https://codeforces.com/contest/1174/submission/97619865
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
	
		int n,tab[N]={0},imp=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			if(tab[i]&1)
				imp++;
		}
		
		if(imp!=n && imp!=0)
		{
			sort(tab,tab+n);
			
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<tab[i]<<" ";
		}
		
	


}
