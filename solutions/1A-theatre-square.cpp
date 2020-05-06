/*
 * Codeforces 1A - Theatre Square
 * Rating: 1000 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1/A
 * Submission: https://codeforces.com/contest/1/submission/79098203
 * Solved: 2020-05-06 (PRACTICE)
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
	ll n,m,a;
	cin>>n>>m>>a;
	cout<<(n/a+min((n%a),(ll)1))*(m/a+min((m%a),(ll)1));

}
