/*
 * Codeforces 4A - Watermelon
 * Rating: 800 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/4/A
 * Submission: https://codeforces.com/contest/4/submission/101463745
 * Solved: 2020-12-16 (PRACTICE)
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
	if(!(n&1) && n!=2)
		cout<<"YES";
	else
		cout<<"NO";
	


}
