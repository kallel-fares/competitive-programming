/*
 * Codeforces 1407A - Ahahahahahahahaha
 * Rating: 1100 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1407/A
 * Submission: https://codeforces.com/contest/1407/submission/92866562
 * Solved: 2020-09-15 (PRACTICE)
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
		int n,tab[1001]={0},s=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>tab[i];
		tab[n]=0;
		int i=0;
		for(i=0;i<n;i++)
		{
		    //cout<<i<<"\n";
			if(tab[i]==1)
			{
			    if(tab[i+1]==1)
				    i++;
			    else
				    tab[i]=2,s++;
			}
			    
		}
		cout<<n-s<<"\n";
		for(int i=0;i<n;i++)
		{
			if(tab[i]!=2)
				cout<<tab[i]<<" ";
		}	
		cout<<"\n";
	}

}
