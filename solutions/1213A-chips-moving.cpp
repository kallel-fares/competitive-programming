/*
 * Codeforces 1213A - Chips Moving
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1213/A
 * Submission: https://codeforces.com/contest/1213/submission/91293597
 * Solved: 2020-08-29 (PRACTICE)
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
	
		int n,a,imp=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a&1)
				imp++;
		}
		cout<<min(imp,n-imp);	
		
		
	

}
