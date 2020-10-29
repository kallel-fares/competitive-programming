/*
 * Codeforces 1428C - ABBB
 * Rating: 1100 | Tags: brute force, data structures, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1428/C
 * Submission: https://codeforces.com/contest/1428/submission/97076382
 * Solved: 2020-10-29 (PRACTICE)
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
		stack<char> s;
		cin>>ch;
		for(int i=0;i<ch.size();i++)
		{
			if(s.empty())
			{
				s.push(ch[i]);
			}
			else if(s.top()=='A' && ch[i]=='B' || s.top()=='B' && ch[i]=='B')
			{
				s.pop();
			}
			else
			{
				s.push(ch[i]);
			}
		}
		cout<<s.size()<<"\n";
	}


}
