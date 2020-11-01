/*
 * Codeforces 1375B - Neighbor Grid
 * Rating: 1200 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1375/B
 * Submission: https://codeforces.com/contest/1375/submission/97385902
 * Solved: 2020-11-01 (PRACTICE)
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
		int n,m,tab[301][301]={0},v=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>tab[i][j];				
			}
		}
		
		
		if(tab[0][0]>2 || tab[0][m-1]>2 || tab[n-1][0]>2 || tab[n-1][m-1]>2)
			v=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(tab[i][0]>3 || tab[0][j]>3 || tab[n-1][j]>3 || tab[i][m-1]>3)
					v=1;
				if(tab[i][j]>4)
					v=1;	
			}
		}
		
		if(v)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			
			cout<<"2 ";
			for(int i=1;i<m-1;i++)
			{
				cout<<"3 ";
			}
			cout<<"2\n";
			
			
			for(int i=1;i<n-1;i++)
			{
				cout<<"3 ";
				for(int j=1;j<m-1;j++)
				{
					cout<<"4 ";
				}
				cout<<"3\n";
			}
			
			cout<<"2 ";
			for(int i=1;i<m-1;i++)
			{
				cout<<"3 ";
			}
			cout<<"2\n";
			
		}
		
	
	}


}
