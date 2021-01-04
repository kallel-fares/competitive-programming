/*
 * Codeforces 1472C - Long Jumps
 * Rating: 1100 | Tags: dp, graphs
 * Problem:    https://codeforces.com/problemset/problem/1472/C
 * Submission: https://codeforces.com/contest/1472/submission/103286165
 * Solved: 2021-01-04 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int n,maxi=0;
		cin>>n;
		
		vector<int> tab(n+5),ans(n+5);
		for(int i=1;i<=n;i++)
			cin>>tab[i];
			
		for(int i=n;i>0;i--)
		{
			if(i+tab[i]<=n)
			{
				ans[i]=tab[i]+ans[i+tab[i]];
				maxi=max(maxi,ans[i]);
			}
			else
			{
				ans[i]=tab[i];
				maxi=max(maxi,ans[i]);
			}
			
		}
		
	
		cout<<maxi<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
