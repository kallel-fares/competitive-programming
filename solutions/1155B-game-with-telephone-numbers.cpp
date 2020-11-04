/*
 * Codeforces 1155B - Game with Telephone Numbers
 * Rating: 1200 | Tags: games, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1155/B
 * Submission: https://codeforces.com/contest/1155/submission/97621364
 * Solved: 2020-11-04 (PRACTICE)
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
	
		int n,v=0;
		string ch;
		cin>>n;
		cin>>ch;
		
		
		
		for(int i=0;i<=n-11;i++)
		{
			if(ch[i]=='8')
			{
				v++;
			}
		}
		if(v>(n-10)/2)
			cout<<"YES\n";
		else
		{
			cout<<"NO\n";
		}
	


}
