/*
 * Codeforces 1438B - Valerii Against Everyone
 * Rating: 1000 | Tags: constructive algorithms, data structures, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1438/B
 * Submission: https://codeforces.com/contest/1438/submission/100301618
 * Solved: 2020-12-03 (VIRTUAL)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
 
const int N=1e3+5;
 
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//O(t=100)
	testc
	{
		map <int,int>m;
		int n,zero=0,v=0,tab[N]={0};
		cin>>n;
		//
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			if(m[tab[i]])
			{
				
				v=1;	
			}
			m[tab[i]]++;
		}
		
			
		
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
 
 
}
