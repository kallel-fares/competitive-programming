/*
 * Codeforces 1496A - Split it!
 * Rating: 900 | Tags: brute force, constructive algorithms, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1496/A
 * Submission: https://codeforces.com/contest/1496/submission/109964917
 * Solved: 2021-03-14 (PRACTICE)
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
		int n,k;
		string ch;
		
		cin>>n>>k;
		cin>>ch;
		
		if(!k)
		{
			cout<<"YES\n";
			continue;
		}
		
		if(k*2+1>n)
		{
			cout<<"NO\n";
			continue;
		}
		
		
		int v=0;
		for(int i=0;i<k;i++)
		{
			if(ch[i]!=ch[ch.size()-1-i])
				v=1;
		}
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
			
		
		
	}
 
 
}
