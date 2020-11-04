/*
 * Codeforces 1185C1 - Exam in BerSU (easy version)
 * Rating: 1200 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1185/C1
 * Submission: https://codeforces.com/contest/1185/submission/97614794
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
	
	
		vector <int>	vect;	
		int n,m,tab[500]={0},t[500]={0};
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			cin>>t[i];
			
			tab[i]+=t[i]+tab[i-1];
		}
		
		
		for(int i=1;i<=n;i++)
		{
			if(tab[i]<=m)
			{
				cout<<"0 ";
			}
			else
			{
				//cout<<"hi";
				int j=(int)vect.size();
				int s=0;
				while(tab[i]>m)
				{
					tab[i]-=vect[j-1];
					j--;
				}
				
				cout<<(int)vect.size()-j<<" ";
				
				
			}
			vect.pb(t[i]);
				
				sort(vect.begin(),vect.end());
		}
		


}
