/*
 * Codeforces 1104B - Game with string
 * Rating: 1200 | Tags: data structures, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1104/B
 * Submission: https://codeforces.com/contest/1104/submission/97685614
 * Solved: 2020-11-05 (PRACTICE)
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
	
		stack <char> s;
		string ch;
		cin>>ch;
		
		int ans=0;	
		s.push('0');
		for(int i=0;i<ch.size();i++)
		{
			if(ch[i]==s.top())
			{
				ans++;
				s.pop();
			}
			else
			{
				s.push(ch[i]);
			}
		}
		
		if(ans&1)
			cout<<"Yes";
		else
			cout<<"No";
	


}
