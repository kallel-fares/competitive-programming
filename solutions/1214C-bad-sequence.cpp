/*
 * Codeforces 1214C - Bad Sequence
 * Rating: 1200 | Tags: data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1214/C
 * Submission: https://codeforces.com/contest/1214/submission/97585880
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

		int n;
		char a;
		string ch;
		stack <char> s;
		cin>>n;
		cin>>ch;
		
		for(int i=0;i<n;i++)
		{
			if(s.empty())
			{
				s.push(ch[i]);
			}
			else
			{
				if(ch[i]==')' && s.top()=='(')
				{
					s.pop();
				}
				else
				{
					s.push(ch[i]);
				}
			}
			
			
			
		}
		
		if(s.empty())
		{
			cout<<"Yes\n";
		}
		else
		{
			if(s.size()==2)
			{
				a=s.top();
				s.pop();
				if(a!=s.top())
				{
					cout<<"Yes\n";
				}
				else
				{
					cout<<"No\n";
				}
				
			}
			else
			{
				cout<<"No\n";
			}
		}
		
		
	


}
