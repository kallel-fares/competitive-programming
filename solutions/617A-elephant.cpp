/*
 * Codeforces 617A - Elephant
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/617/A
 * Submission: https://codeforces.com/contest/617/submission/103084813
 * Solved: 2021-01-03 (PRACTICE)
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

	//freopen("","r",stdin);
	
	int a;
	cin>>a;
	
	cout<<a/5+min(a%5,1);


}
