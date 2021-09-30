/*
 * Codeforces 1581A - CQXYM Count Permutations
 * Rating: 800 | Tags: combinatorics, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1581/A
 * Submission: https://codeforces.com/contest/1581/submission/130341963
 * Solved: 2021-09-30 (CONTESTANT)
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
	testc
	{
		ll n;
		cin>>n;
		
		ll s=1;
		for(int i=n*2;i>=3;i--)
		{
			s=(i*s)%(1000000007);
		}
		
		cout<<s<<"\n";
	
	}


}
