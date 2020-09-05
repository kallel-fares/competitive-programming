/*
 * Codeforces 1409A - Yet Another Two Integers Problem
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1409/A
 * Submission: https://codeforces.com/contest/1409/submission/91944604
 * Solved: 2020-09-05 (VIRTUAL)
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
		int a,b;
		cin>>a>>b;
		cout<<(int)ceil((float)(abs(a-b))/10)<<"\n";
	}

}
