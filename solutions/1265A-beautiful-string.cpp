/*
 * Codeforces 1265A - Beautiful String
 * Rating: 1000 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1265/A
 * Submission: https://codeforces.com/contest/1265/submission/108477213
 * Solved: 2021-02-25 (VIRTUAL)
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
		int v=0;
		string ch,dumb="abc";
		cin>>ch;
		
		if(ch=="?")
		{
			cout<<"a\n";
			continue;
		}
		if(ch.size()>1)
		{
			if(ch[0]=='?')
			{
				for(int j=0;j<3;j++)
				{
					if(dumb[j]!=ch[1])
					{
						ch[0]=dumb[j];
						break;
					}
				}
			}
			if(ch[ch.size()-1]=='?')
			{
				for(int j=0;j<3;j++)
				{
					if(dumb[j]!=ch[ch.size()-2])
					{
						ch[ch.size()-1]=dumb[j];
						break;
					}
				}
			}
			if(ch[ch.size()-1]==ch[ch.size()-2])
			{
				v=1;
			}
		}
		
		
		for(int i=1;i<ch.size()-1;i++)
		{
			if(ch[i]=='?')
			{
				for(int j=0;j<3;j++)
				{
					if(dumb[j]!=ch[i-1] && dumb[j]!=ch[i+1])
					{
						ch[i]=dumb[j];
						break;
					}
				}
			}
			else
			{
				if(ch[i]==ch[i-1])
				{
					v=1;
				}
			}
			
		}
		
		if(v)
			cout<<"-1\n";
		else
			cout<<ch<<"\n";
	
	}


}
