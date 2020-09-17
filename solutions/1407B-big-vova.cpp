/*
 * Codeforces 1407B - Big Vova
 * Rating: 1300 | Tags: brute force, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1407/B
 * Submission: https://codeforces.com/contest/1407/submission/93056405
 * Solved: 2020-09-17 (PRACTICE)
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
		int n,tab[1001]={0};
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>tab[i];
			
		sort(tab,tab+n,greater<int>());
		cout<<tab[0]<<" ";
		int g=tab[0];
		for(int i=g/2;i>=1;i--)
		{
			if(g%i==0)
			{
			//	cout<<":"<<i<<"\n";
				for(int j=1;j<n;j++)
				{
					if(tab[j]!=0)
					{
						if(tab[j]%i==0)
						{
							cout<<tab[j]<<" ";
							g=__gcd(g,tab[j]);
							tab[j]=0;
						}
					}
					
				}
			}
			
		}
		cout<<"\n";
	}
 
}
