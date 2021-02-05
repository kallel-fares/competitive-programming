/*
 * Codeforces 1481A - Space Navigation 
 * Rating: 800 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1481/A
 * Submission: https://codeforces.com/contest/1481/submission/106544307
 * Solved: 2021-02-05 (CONTESTANT)
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

	//freopen("","r",stdin);
	testc
	{
		int x,y,v=2,u=0,d=0,r=0,l=0;
		string ch;
		cin>>x>>y;
		cin>>ch;
		
		for(int i=0;i<ch.size();i++)
		{
			if(ch[i]=='U')
				u++;
			if(ch[i]=='D')
				d++;
			if(ch[i]=='R')
				r++;
			if(ch[i]=='L')
				l++;
		}
		if(x==0)
			v--;
		if(y==0)
			v--;
		
		if(x>0 && x<=r)
		{
			v--;
		}
		if(x<0 && abs(x)<=l)
		{
			v--;
		}
		if(y>0 && y<=u)
		{
			v--;
		}
		if(y<0 && abs(y)<=d)
		{
			v--;
		}
		
		
		if(!v)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
		//memset(tab,0,4*(n+1));
	
	}


}
