/*
 * Codeforces 1462B - Last Year's Substring
 * Rating: 800 | Tags: dp, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1462/B
 * Submission: https://codeforces.com/contest/1462/submission/101338158
 * Solved: 2020-12-15 (CONTESTANT)
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
		int n,v=0,ans=0;
		string ch;
		
		cin>>n;
		cin>>ch;
		
		string twotwo="2020";
		
		int i=0;
		while(ch[i]==twotwo[i] && i<4)
		{
			i++;
		}
		
		int j=0;
		while(ch[n-1-j]==twotwo[4-j-1] && j<4)
		{
			j++;
		}
		
		if(i+j>=4)
			v=1;
		
		
		
		
		if(ch[0]=='2' && ch[1]=='0' && ch[2]=='2' && ch[3]=='0')
			v=1;
			
		if(ch[n-4]=='2' && ch[n-3]=='0' && ch[n-2]=='2' && ch[n-1]=='0')
			v=1;
			
		
		
		
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}


}
