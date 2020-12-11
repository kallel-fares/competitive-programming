/*
 * Codeforces 1461C - Random Events
 * Rating: 1500 | Tags: dp, math, probabilities
 * Problem:    https://codeforces.com/problemset/problem/1461/C
 * Submission: https://codeforces.com/contest/1461/submission/100963634
 * Solved: 2020-12-11 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int tab[N]={0},n,m,check[N]={0};
		cin>>n>>m;
		for(int i=0;i<n;i++)
			cin>>tab[i];
		
		double prev=0;
		
		
		for(int j=n-1;j>=0;j--)
		{
			if(tab[j]==j+1)
			{
				check[j]=1;
			}
			else
			{
				break;
			}
		}
		
		/*for(int j=0;j<n;j++)
		{
			cout<<check[j]<<" ";
		}
		cout<<"\n";*/
		
		
		
		prev=check[0];
		//cout<<prev<<" ";
		for(int i=0;i<m;i++)
		{
			int a;
			double p;
			cin>>a>>p;
			
			
			
			if(check[a] || a==n)
			{
				prev=max(prev+p-prev*p,(double)0);
			}
			
			
			
			
			
			
		}		
		printf("%f \n",prev);
	
	}


}
