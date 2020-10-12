/*
 * Codeforces 825A - Binary Protocol
 * Rating: 1100 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/825/A
 * Submission: https://codeforces.com/contest/825/submission/95328572
 * Solved: 2020-10-12 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,v=0;
	string ch;
	cin>>n;
	cin>>ch;
	for(int i=0;i<n;i++)
	{
		if(ch[i]=='1')
			v++;
		if(ch[i]=='0')
		{
			if(v)
			{
				cout<<v;
				v=0;
			}
			else
			{
				cout<<'0';
			}
		}
			
	}
	if(v)
		cout<<v;
		
	if(ch[n-1]=='0')
		cout<<'0';
	

}
