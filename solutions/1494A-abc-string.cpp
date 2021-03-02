/*
 * Codeforces 1494A - ABC String
 * Rating: 900 | Tags: bitmasks, brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1494/A
 * Submission: https://codeforces.com/contest/1494/submission/108901132
 * Solved: 2021-03-02 (CONTESTANT)
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
		string ch,aux1,aux2;
		int op=0,cl=0,rest=0;
		
		stack<char> st,st2;
		cin>>ch;
		
		aux1=aux2=ch;
		if(ch[0]==ch[ch.size()-1])
		{
			cout<<"NO\n";
			continue;
		}
		
		for(int i=1;i<ch.size();i++)
		{
			if(ch[i]==ch[0])
			{
				aux1[i]='(';
				aux2[i]='(';
			}
			
			if(ch[i]==ch[ch.size()-1])
			{
				
				aux1[i]=')';
				aux2[i]=')';
			}
			
			if(ch[i]!=ch[0] && ch[i]!=ch[ch.size()-1])
			{
				aux1[i]='(';
				aux2[i]=')';
			}
			
		}
		aux1[0]='(';
		aux2[0]='(';
		//cout<<aux1<<" "<<aux2<<"\n";
		
		
		
		for(int i=0;i<ch.size();i++)
		{
			if(st.empty())
			{
				st.push(aux1[i]);
			}
			else
			{
				if(st.top()=='(' && aux1[i]==')')
				{
					st.pop();
				}
				else
				{
					st.push(aux1[i]);
				}
				
			}
			
		}
		if(st.empty())
		{
			cout<<"YES\n";
			continue;
		}
		
		
		for(int i=0;i<ch.size();i++)
		{
			if(st2.empty())
			{
				st2.push(aux2[i]);
			}
			else
			{
				if(st2.top()=='(' && aux2[i]==')')
				{
					st2.pop();
				}
				else
				{
					st2.push(aux2[i]);
				}
				
			}
			
		}
		if(st2.empty())
		{
			cout<<"YES\n";
			continue;
		}
		cout<<"NO\n";
		//cout<<op<<" "<<cl<<" ";
		
	
	}


}
