/*
 * Codeforces 1341A - Nastya and Rice
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1341/A
 * Submission: https://codeforces.com/contest/1341/submission/77866222
 * Solved: 2020-04-24 (PRACTICE)
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
	int a,b,c,d,n;
	testc
	{
		cin>>n>>a>>b>>c>>d;	
		if(n*(a+b)<c-d || c+d<n*(a-b))
		{
			cout<<"NO\n";	
		}
		else
		{
			cout<<"YES\n";
		}
			
			
	}


}
