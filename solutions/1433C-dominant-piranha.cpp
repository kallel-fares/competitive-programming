/*
 * Codeforces 1433C - Dominant Piranha
 * Rating: 900 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1433/C
 * Submission: https://codeforces.com/contest/1433/submission/96183847
 * Solved: 2020-10-20 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
const int N=3e+5+5;


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		
		int n,tab[N]={0},maxi=0,v=0,occ=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			if(tab[i]>maxi)
			{
				maxi=tab[i];
				occ=1;
			}
			else if(tab[i]==maxi)
			{
				occ++;
			}
			
		}
		
		//cout<<"maxi="<<maxi<<" ";
		
		if(occ==n)
		{
			cout<<"-1\n";
			continue;
		}
		for(int i=0;i<n;i++)
		{
			if(tab[i]==maxi)
			{
				if(i-1>=0 && tab[i-1]!=maxi)
				{
					//cout<<"zab";
					v=i;
					break;
				}
				if(i+1<n && tab[i+1]!=maxi)
				{
					v=i;
					break;
				}
			}
		}
		
		cout<<v+1<<"\n";
		
		
		
		
		
	}

}
