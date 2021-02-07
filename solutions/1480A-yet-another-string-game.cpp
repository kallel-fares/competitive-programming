/*
 * Codeforces 1480A - Yet Another String Game
 * Rating: 800 | Tags: games, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1480/A
 * Submission: https://codeforces.com/contest/1480/submission/106755591
 * Solved: 2021-02-07 (CONTESTANT)
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
		string ch,ans="";
		int v=1;
		cin>>ch;
		for(int i=0;i<ch.size();i++)
		{
			if(v&1)
			{
				if(ch[i]=='a')
					ans+='b';
				else
					ans+='a';
			}
			else
			{
				if(ch[i]=='z')
					ans+='y';
				else
					ans+='z';
			}
			v=(v+1)%2;
			
		}
		
		cout<<ans<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
