/*
 * Codeforces 1285C - Fadi and LCM
 * Rating: 1400 | Tags: brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1285/C
 * Submission: https://codeforces.com/contest/1285/submission/115947273
 * Solved: 2021-05-11 (PRACTICE)
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

	ll a;
	cin>>a;
	for(int i=(int)ceil(sqrt(a));i>=1;i--)
	{
		if(a%i==0)
		{
			if(__gcd(a/i,(ll)i)==1)
			{
				cout<<a/i<<" "<<i;
				break;
			}
		}
	}


}
