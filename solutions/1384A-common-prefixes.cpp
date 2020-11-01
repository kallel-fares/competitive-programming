/*
 * Codeforces 1384A - Common Prefixes
 * Rating: 1200 | Tags: constructive algorithms, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1384/A
 * Submission: https://codeforces.com/contest/1384/submission/97375080
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

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	testc
	{
		int n,alt=0,tab[101]={0},maxi=0;
		string ch;
		char aux;
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			maxi=max(maxi,tab[i]);
		}
		
		
		
		for(int i=0;i<maxi;i++)
		{
			ch+='a';
		}
		
		
		if(maxi==0)
		{
			for(int i=0;i<=n;i++)
			{
				cout<<(char)('a'+i%26)<<"\n";
			}
		}
		else
		{
			cout<<ch<<"\n";
		
			for(int i=0;i<n;i++)
			{
				if(ch[tab[i]]+1==123)
					ch[tab[i]]='a';
				else	
					ch[tab[i]]=(char)(ch[tab[i]]+1);
				cout<<ch<<"\n";
			}
		}
		
		
		
	}


}
