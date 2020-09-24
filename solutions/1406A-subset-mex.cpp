/*
 * Codeforces 1406A - Subset Mex
 * Rating: 900 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1406/A
 * Submission: https://codeforces.com/contest/1406/submission/93639422
 * Solved: 2020-09-24 (VIRTUAL)
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
		int n,tab[101]={0},a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			tab[a]++;
		}
		
		int v=2,ans=0;
		for(int i=0;i<=100;i++)
		{
			if(tab[i]-v<0)
			{
				ans+=abs(tab[i]-v)*i;
				v=v-abs(tab[i]-v);
			}
		}
		cout<<ans<<"\n";
		
		
	}

}
