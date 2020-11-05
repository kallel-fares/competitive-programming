/*
 * Codeforces 1099C - Postcard
 * Rating: 1200 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1099/C
 * Submission: https://codeforces.com/contest/1099/submission/97718838
 * Solved: 2020-11-05 (PRACTICE)
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
	
	
	string ch,ans;
	int n,c=0,s=0,v=0;	
	cin>>ch;
	cin>>n;
	for(int i=0;i<ch.size();i++)
	{
		
		if(ch[i]!='?' && ch[i]!='*')
			c++;
			
	}
//	cout<<c<<" ";
	
	for(int i=0;i<ch.size()-1;i++)
	{
		
		if(c==n)
		{
			if(ch[i+1]!='?' && ch[i+1]!='*')
			{
				if(ch[i]!='?' && ch[i]!='*')
				{
	 				ans+=ch[i];	
					continue;
				}
			}
			
		}
		
		
		if(ch[i+1]=='?')
		{
			if(c>n)
			{
				
				c--;
				continue;
			}
			ans+=ch[i];
		}
		
		
		if(ch[i+1]=='*')
		{
			
			
			if(c>n)
			{
				
				c--;
				continue;
			}
			
			
			ans+=ch[i];
			while(c<n)
			{
				ans+=ch[i];
				c++;
			}
			continue;
			
		}
		if(ch[i+1]!='?' && ch[i+1]!='*')
		{
			if(ch[i]!='?' && ch[i]!='*')
			{
	 			ans+=ch[i];	
				continue;
			}
		}
		
	}
	
	
	if(c!=n)
		cout<<"Impossible";
	else
	{
		cout<<ans;
		if(ch[ch.size()-1]!='?' && ch[ch.size()-1]!='*')
			cout<<ch[ch.size()-1];
		
	}
	
	
	
	


}
