/*
 * Codeforces 1417B - Two Arrays
 * Rating: 1100 | Tags: greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1417/B
 * Submission: https://codeforces.com/contest/1417/submission/95018250
 * Solved: 2020-10-09 (PRACTICE)
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
		int v=0,tab[N]={0},n,t;
		cin>>n>>t;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if(tab[i]*2<t)
			{
				cout<<"0 ";
			}
			else if(tab[i]*2>t)
			{
				cout<<"1 ";
			}
			else
			{
				//cout<<"bruv";
				if(v&1)
				{
					cout<<"0 ";
				}
				else
				{
					cout<<"1 ";
				}
				v=(v+1)%2;
					
			}
		}
		cout<<"\n";
	}

}
