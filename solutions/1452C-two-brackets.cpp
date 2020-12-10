/*
 * Codeforces 1452C - Two Brackets
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1452/C
 * Submission: https://codeforces.com/contest/1452/submission/100857180
 * Solved: 2020-12-10 (VIRTUAL)
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
		string ch;
		cin>>ch;
		
		int v=0,b=0,ans=0;
		for(int i=0;i<ch.size();i++)
		{
			if(ch[i]=='(')
			{
				v++;
			}
			
			if(ch[i]==')')
			{
				if(v)
					ans++,v--;
				
			}
			
			if(ch[i]=='[')
			{
				b++;
			}
			
			if(ch[i]==']')
			{
				if(b)
					ans++,b--;
				
			}
		}
		cout<<ans<<"\n";
	
	}


}
