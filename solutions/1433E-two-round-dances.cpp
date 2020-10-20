/*
 * Codeforces 1433E - Two Round Dances
 * Rating: 1300 | Tags: combinatorics, math
 * Problem:    https://codeforces.com/problemset/problem/1433/E
 * Submission: https://codeforces.com/contest/1433/submission/96185767
 * Solved: 2020-10-20 (PRACTICE)
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
	ll n,ans=1;
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	cout<<ans/((n*n)/2);


}
