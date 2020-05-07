/*
 * Codeforces 1345A - Puzzle Pieces
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1345/A
 * Submission: https://codeforces.com/contest/1345/submission/79223301
 * Solved: 2020-05-07 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	testc
	{
		int n,m;
		cin>>n>>m;
		if(min(n,m)==1 || (n==2 && m==2))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
		
	}
}
