/*
 * Codeforces 1324C - Frog Jumps
 * Rating: 1100 | Tags: binary search, data structures, dfs and similar, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1324/C
 * Submission: https://codeforces.com/contest/1324/submission/79105368
 * Solved: 2020-05-06 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		string ch;
		int s=1,maxi=1;
		
		cin>>ch;
		for(int i=0;i<ch.size();i++)
		{
			if(ch[i]=='L')
				s++;
			else
				s=1;
				
			maxi=max(s,maxi);
		}
		if(count(ch.begin(),ch.end(),'L')==ch.size())
		{
			cout<<ch.size()+1<<"\n";
			continue;
		}
		cout<<maxi<<"\n";
			
		
		
		
	}
}
