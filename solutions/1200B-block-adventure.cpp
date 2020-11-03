/*
 * Codeforces 1200B - Block Adventure
 * Rating: 1200 | Tags: dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1200/B
 * Submission: https://codeforces.com/contest/1200/submission/97595414
 * Solved: 2020-11-03 (PRACTICE)
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
	testc
	{
		int n,m,k,tab[105]={0},t[105]={0},v=0;
		
		cin>>n>>m>>k;
		
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		
		for(int i=0;i<n-1;i++)
		{
			if(tab[i]>=max(tab[i+1]-k,0))
			{
				m+=tab[i]-max(tab[i+1]-k,0);
			}
			else
			{
				if(tab[i+1]-tab[i]-k>m)
				{
					//cout<<tab[i+1]<<" "<<tab[i];
					v=1;
				}
				else
				{
					m-=tab[i+1]-tab[i]-k;
				}
			}
			
			
			
		}
		
		if(v)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
		
		
		
		
		
	}


}
