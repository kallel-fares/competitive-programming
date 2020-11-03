/*
 * Codeforces 1272B - Snow Walking Robot
 * Rating: 1200 | Tags: constructive algorithms, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1272/B
 * Submission: https://codeforces.com/contest/1272/submission/97569187
 * Solved: 2020-11-03 (PRACTICE)
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
		int u=0,d=0,r=0,l=0;
		string ch;
		cin>>ch;
		for(int i=0;i<ch.size();i++)
		{
			if(ch[i]=='U')
				u++;
			else if(ch[i]=='D')
				d++;
			else if(ch[i]=='R')
				r++;	
			else
				l++;
				
				
		}
		u=min(u,d);
		r=min(r,l);
		
		if(u==0)
		{
			if(r==0)
			{
				cout<<"0\n";
			}
			else
			{
				cout<<"2\nRL\n";
			}
		}
		else
		{
			if(r==0)
			{
				cout<<"2\nUD\n";
			}
			else
			{
				cout<<(u+r)*2<<"\n";
				for(int i=0;i<u;i++)
				{
					cout<<"U";
				}
				for(int i=0;i<r;i++)
				{
					cout<<"R";
				}
				for(int i=0;i<u;i++)
				{
					cout<<"D";
				}
				for(int i=0;i<r;i++)
				{
					cout<<"L";
				}
				cout<<"\n";
			}
		}
		
	
	}


}
