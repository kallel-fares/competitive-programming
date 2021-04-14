/*
 * Codeforces 1512C - A-B Palindrome
 * Rating: 1200 | Tags: constructive algorithms, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1512/C
 * Submission: https://codeforces.com/contest/1512/submission/113047246
 * Solved: 2021-04-14 (PRACTICE)
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
		int a,b;
		cin>>a>>b;
		string ch;
		cin>>ch;
		int n=ch.size(),v=0;
		
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='0')
				a--;
			if(ch[i]=='1')
				b--;
			
		}
		for(int i=0;i<n/2;i++)
		{
			if(ch[i]=='?' && ch[n-1-i]!='?')
			{
				if(ch[n-1-i]=='0')
				{
					a--;
					ch[i]='0';
				}
				else
				{
					b--;
					ch[i]='1';
				}
			}
			else if(ch[n-1-i]=='?' && ch[i]!='?')
			{
				if(ch[i]=='0')
				{
					a--;
					ch[n-1-i]='0';
				}
				else
				{
					b--;
					ch[n-1-i]='1';
				}
			}
			else if(ch[n-1-i]!=ch[i])
			{
				v=1;
			}
				
		}
		
		if(a<0 || b<0 || v || (a&1 && b&1))
		{
			//cout<<a<<" "<<b<<" "<<v<<"\n";
			cout<<"-1\n";	
		}
		else
		{
			
			for(int i=0;i<n/2;i++)
			{
				if(ch[i]=='?' && ch[n-1-i]=='?')
				{
					if(a>=2)
					{
						ch[i]=ch[n-1-i]='0';
						a-=2;
					}
					else
					{
						ch[i]=ch[n-1-i]='1';
						b-=2;
					}
				}
			}
			
			if(a)
			{
				ch[n/2]='0';
				a--;	
			}
			
			if(b)
			{
				ch[n/2]='1';
				b--;	
			}
			if(a!=0 || b!=0)
				cout<<"-1\n";
			else
				cout<<ch<<"\n";
			//cout<<a<<" "<<b<<" "<<ch;
		}
	}
 
 
}
