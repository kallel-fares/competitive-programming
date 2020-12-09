/*
 * Codeforces 593A - 2Char
 * Rating: 1200 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/593/A
 * Submission: https://codeforces.com/contest/593/submission/100777866
 * Solved: 2020-12-09 (PRACTICE)
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
	
	int n,tab[50][50];
	string ch;
	cin>>n;
	while(n--)
	{
	    
	
		cin>>ch;
		int v=0,len=ch.size();
		pair<char,char> p=make_pair(' ',' ');
		for(int k=0;k<len-1;k++)
		{
			
			
			if(ch[k]!=ch[k+1])
			{
				if(p.first==' ')
				{	
					p.first=ch[k];
					p.second=ch[k+1];
				}
				else
				{
					if((ch[k]!=p.first && ch[k]!=p.second) || (ch[k+1]!=p.first && ch[k+1]!=p.second))
					{
						v=1;
					}
					
				}
			}
			
			
		}
		if(!v)
		{
			if(p.first==' ')
			{
				for(int i=0;i<=26;i++)
					tab[ch[0]-'a'][i]+=len;
					
				for(int i=0;i<=26;i++)
					if(ch[0]-'a'!=i)
						tab[i][ch[0]-'a']+=len;
			}
			else
			{
				tab[p.first-'a'][p.second-'a']+=len;
				
				tab[p.second-'a'][p.first-'a']+=len;
			}
		}
	}
	
	int maxi=0;
	for(int i=0;i<=27;i++)
	{
		for(int j=0;j<=27;j++)
		{
			maxi=max(maxi,tab[i][j]);
		}
	}
	cout<<maxi;


}
