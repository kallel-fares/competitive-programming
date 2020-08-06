/*
 * Codeforces 1399C - Boats Competition
 * Rating: 1200 | Tags: brute force, greedy, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1399/C
 * Submission: https://codeforces.com/contest/1399/submission/89104093
 * Solved: 2020-08-06 (PRACTICE)
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
		int tab[N]={0},tab1[N]={0},n,a,maxi=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			tab[a]++;
		}
		
		for(int i=0;i<=n;i++)
		{
			tab1[i*2]+=tab[i]/2;
			maxi=max(maxi,tab1[i*2]);
			for(int j=i+1;j<=n;j++)
			{
				tab1[i+j]+=min(tab[i],tab[j]);
				maxi=max(maxi,tab1[i+j]);
				
			}
		}
		
		/*for(int i=0;i<17;i++)
		{
			cout<<tab[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<17;i++)
		{
			cout<<tab1[i]<<" ";
		}*/
		
		cout<<maxi<<"\n";
		
		
	}

}
