/*
 * Codeforces 1343A - Candies
 * Rating: 900 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1343/A
 * Submission: https://codeforces.com/contest/1343/submission/77511921
 * Solved: 2020-04-21 (CONTESTANT)
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
	testc
	{
		int n;
		cin>>n;
		int i=4;
		while(i<=n+1)
		{
			if(n%(i-1)==0)
			{
				cout<<n/(i-1)<<"\n";
				break;
			}
			i<<=1;
		}
	}


}
