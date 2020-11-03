/*
 * Codeforces 1221C - Perfect Team
 * Rating: 1200 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1221/C
 * Submission: https://codeforces.com/contest/1221/submission/97584919
 * Solved: 2020-11-03 (PRACTICE)
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
		ll a,b,c,v;
		cin>>a>>b>>c;
		
		v=a+b+c;
		
		cout<<min(v/3,min(a,b))<<"\n";
	}


}
