/*
 * Codeforces 1140B - Good String
 * Rating: 1200 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1140/B
 * Submission: https://codeforces.com/contest/1140/submission/100794809
 * Solved: 2020-12-09 (PRACTICE)
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
		int n;
		cin>>n;
		string ch;
		cin>>ch;
		int k=n,d=0;
		
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='>')
			{
				k=i;
				break;
			}
		}
		
		for(int i=n-1;i>=0;i--)
		{
			if(ch[i]=='<')
			{
				d=i;
				break;
			}
		}
		
		cout<<min(k,n-1-d)<<"\n";
		
	
	}


}
