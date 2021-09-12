/*
 * Codeforces 1509B - TMT Document
 * Rating: 1100 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1509/B
 * Submission: https://codeforces.com/contest/1509/submission/128577243
 * Solved: 2021-09-12 (PRACTICE)
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
		int n;
		cin>>n;
		
		string ch;
		cin>>ch;
		
		int s=0,d=0,v=0;
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='T')
				s++;
			else
				s--;
				
			if(s<0)
				v=1;
		}
		s=0;
		for(int i=n-1;i>=0;i--)
		{
			if(ch[i]=='T')
				s++;
			else
				s--;
				
			if(s<0)
				v=1;
		}
		
		
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='M')
				d++;
				
		}
		
		if(v || d*3!=n)
			cout<<"NO\n";
		else
			cout<<"YES\n";
			
			
		
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
