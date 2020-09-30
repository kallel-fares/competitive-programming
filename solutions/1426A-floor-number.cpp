/*
 * Codeforces 1426A - Floor Number
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1426/A
 * Submission: https://codeforces.com/contest/1426/submission/94358797
 * Solved: 2020-09-30 (VIRTUAL)
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
		int n,x;
		cin>>n>>x;
		cout<<max(n-2,0)/x+min(max(n-2,0)%x,1)+1<<"\n";
	}

}
