/*
 * Codeforces 1360A - Minimal Square
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1360/A
 * Submission: https://codeforces.com/contest/1360/submission/81217827
 * Solved: 2020-05-24 (CONTESTANT)
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
	int a,b;
	testc
	{
		cin>>a>>b;
		if(min(a,b)*2<max(a,b))
			cout<<max(a,b)*max(a,b);
		else
			cout<<4*min(a,b)*min(a,b);
		cout<<"\n";
		
	}
	


}
