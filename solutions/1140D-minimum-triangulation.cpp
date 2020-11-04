/*
 * Codeforces 1140D - Minimum Triangulation
 * Rating: 1200 | Tags: dp, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1140/D
 * Submission: https://codeforces.com/contest/1140/submission/97643897
 * Solved: 2020-11-04 (PRACTICE)
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
	
	int n;
	cin>>n;
	ll ans=6;
	for(int i=4;i<=n;i++)
	{
		ans+=i*(i-1);
	}
	cout<<ans;
	


}
