/*
 * Codeforces 1453B - Suffix Operations
 * Rating: 1400 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1453/B
 * Submission: https://codeforces.com/contest/1453/submission/100446339
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

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		ll v=0,maxi=0,bad=0;
		int tab[N]={0},tab1[N]={0};
		
		
		
		
		int n;
		cin>>n;
		
		for(int i=0;i<n;i++)cin>>tab[i];
		
		for(int i=0;i<n-1;i++)
		{
			v+=abs(tab[i]-tab[i+1]);
		}
		ll big=v;
		for(int i=0;i<n-2;i++)
		{
			v=min(v,(ll)(big-abs(tab[i]-tab[i+1])-abs(tab[i+1]-tab[i+2])+abs(tab[i]-tab[i+2])));
		}
		
	//	cout<<v<<" ";
	
		ll ans=v;
		v=0;
		for(int i=1;i<n-1;i++)
		{
			v+=abs(tab[i]-tab[i+1]);
			
		}
		ans=min(ans,v);
		v=0;
		for(int i=0;i<n-2;i++)
		{
			v+=abs(tab[i]-tab[i+1]);
			
		}
		cout<<min(ans,v)<<"\n";
	}


}
