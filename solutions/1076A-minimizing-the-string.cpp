/*
 * Codeforces 1076A - Minimizing the String
 * Rating: 1200 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1076/A
 * Submission: https://codeforces.com/contest/1076/submission/97730677
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
	
	int n,v=0;
	string ch;
	
	
	cin>>n>>ch;
	//int maxi=ch[ch.size()-1]-'a';
	
	
	for(int i=0;i<n-1;i++)
	{
		if(ch[i]-'a'>ch[i+1]-'a' && v==0)
		{
			v=1;
		}
		else
		    cout<<ch[i];
	}
	
	if(v==1)
		cout<<ch[n-1];
	


}
