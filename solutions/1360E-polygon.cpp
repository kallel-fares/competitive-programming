/*
 * Codeforces 1360E - Polygon
 * Rating: 1300 | Tags: dp, graphs, implementation, shortest paths
 * Problem:    https://codeforces.com/problemset/problem/1360/E
 * Submission: https://codeforces.com/contest/1360/submission/81331322
 * Solved: 2020-05-24 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=52;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	testc
	{		
		int n,v=0;
		
		cin>>n;
		string tab[N];
		//cout<<"hi";
		for(int i=0;i<n;i++)cin>>tab[i];
		
	//	cout<<"hi";
		for(int i=0;i<n-1;i++)
		{
			//cout<<"hi";
			for(int j=0;j<n-1;j++)
			{
				if(tab[i][j]=='1')
				{
					if(tab[i+1][j]=='0' && tab[i][j+1]=='0')
					{
						v=1;
						break;
					}
				}
			}
		}
		
		if(v==1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
			
	}
}
