/*
 * Codeforces 1372B - Omkar and Last Class of Math
 * Rating: 1300 | Tags: greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1372/B
 * Submission: https://codeforces.com/contest/1372/submission/86637600
 * Solved: 2020-07-12 (PRACTICE)
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
	int n;
	testc
	{
		cin>>n;
		int val=1;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				val=i;
				break;
			}
				
		}
		if(val!=1)
			cout<<n/val<<" "<<(n/val)*(val-1)<<"\n";
		else
			cout<<n-1<<" 1\n";
	}
 
 
}
