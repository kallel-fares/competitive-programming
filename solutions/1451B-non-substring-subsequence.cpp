/*
 * Codeforces 1451B - Non-Substring Subsequence
 * Rating: 900 | Tags: dp, greedy, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1451/B
 * Submission: https://codeforces.com/contest/1451/submission/99736402
 * Solved: 2020-11-27 (VIRTUAL)
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
		int n,q,a,b,v=0;
		string ch;
		cin>>n>>q;
		
		cin>>ch;
		for(int i=0;i<q;i++)
		{
			v=0;
			cin>>a>>b;
			int k=a-2;
			while(ch[k]!=ch[a-1])
			{
				
				k--;
				if(k<0)
					break;
			}
			if(k>=0)
				v++;
				
			k=b;
			while(ch[k]!=ch[b-1])
			{
				k++;
				if(k>=n)
					break;
			}
			if(k<n)
				v++;
				
			if(v)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
		
		
		
				
	}


}
