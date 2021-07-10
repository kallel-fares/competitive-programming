/*
 * Codeforces 1547B - Alphabetical Strings
 * Rating: 800 | Tags: greedy, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1547/B
 * Submission: https://codeforces.com/contest/1547/submission/121938409
 * Solved: 2021-07-10 (CONTESTANT)
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
		string alpha="zyxwvutsrqponmlkjihgfedcba";
		string ch;
		cin>>ch;
		
		int s=0,e=ch.size()-1,v=0;
		for(int i=0;i<ch.size();i++)
		{
			if(alpha[26-ch.size()+i]==ch[s])
			{
				s++;
			}
			else if(alpha[26-ch.size()+i]==ch[e])
			{
				e--;
			}
			else
			{
				v=1;
			}
		}
			
			
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	
	}


}
