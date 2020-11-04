/*
 * Codeforces 1153B - Serval and Toy Bricks
 * Rating: 1200 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1153/B
 * Submission: https://codeforces.com/contest/1153/submission/97640811
 * Solved: 2020-11-04 (PRACTICE)
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
	
		
		
		int n,m,h,f[101]={0},l[101]={0},g[101][101]={0};
		cin>>n>>m>>h;
		for(int i=0;i<m;i++)
		{
			cin>>f[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>l[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>g[i][j];
			}
		}
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(g[i][j])
				{
					cout<<min(l[i],f[j])<<" ";
				}
				else
				{
					cout<<"0 ";
				}
			}
			cout<<"\n";
		}
		
		
	


}
