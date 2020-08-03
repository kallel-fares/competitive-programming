/*
 * Codeforces 1389A - LCM Problem
 * Rating: 800 | Tags: constructive algorithms, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1389/A
 * Submission: https://codeforces.com/contest/1389/submission/88816550
 * Solved: 2020-08-03 (PRACTICE)
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
	
	int l,r;
	testc
	{
		cin>>l>>r;
		if(l*2<=r)
		{
			cout<<l<<" "<<l*2;
		}
		else
		{
			cout<<"-1 -1";
		}
		cout<<"\n";
	
	}

}
