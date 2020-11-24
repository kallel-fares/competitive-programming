/*
 * Codeforces 1454B - Unique Bid Auction
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1454/B
 * Submission: https://codeforces.com/contest/1454/submission/99426598
 * Solved: 2020-11-24 (CONTESTANT)
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
		int n,tab[N]={0},freq[N]={0},aux=0,v=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			freq[tab[i]]++;
		}
		
		for(int i=0;i<=n;i++)
		{
			if(freq[i]==1)
			{
				aux=i;
				break;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			if(aux==tab[i])
			{
				v=i+1;
			}
			
		}
		
		if(v)
		{
			cout<<v<<"\n";
		}
		else
		{
			cout<<"-1\n";
		}
		
		
	}


}
