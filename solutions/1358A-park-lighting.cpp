/*
 * Codeforces 1358A - Park Lighting
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1358/A
 * Submission: https://codeforces.com/contest/1358/submission/81526515
 * Solved: 2020-05-26 (CONTESTANT)
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
		int n,m;
		cin>>n>>m;
		cout<<(int)ceil((float)(n*m)/2)<<"\n";
	}

}
