/*
 * Codeforces 1401B - Ternary Sequence
 * Rating: 1100 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1401/B
 * Submission: https://codeforces.com/contest/1401/submission/91166026
 * Solved: 2020-08-27 (PRACTICE)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	testc
	{
		int a,b,c,a1,b1,c1,v;
		cin>>a>>b>>c>>a1>>b1>>c1;
		c1-=min(c1,a);
		v=min(c,b1);
		c-=v;
		c1-=min(c,c1);
		cout<<v*2-min(c1,b)*2<<"\n";
		
		
	}

}
