/*
 * Codeforces 1505C - Fibonacci Words
 * Rating: 1400 | Tags: *special, implementation
 * Problem:    https://codeforces.com/problemset/problem/1505/C
 * Submission: https://codeforces.com/contest/1505/submission/115358454
 * Solved: 2021-05-05 (PRACTICE)
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

	string ch;
	cin>>ch;
	int v=0;
	
	if(ch.size()<3)
		cout<<"YES\n";
	else
	{
		for(int i=2;i<ch.size();i++)
		{
			if(char((ch[i-1]-'A'+ch[i-2]-'A')%26+'A')!=ch[i])
				v=1;
		}
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}


}
