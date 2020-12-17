/*
 * Codeforces 1463A - Dungeon
 * Rating: 1100 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1463/A
 * Submission: https://codeforces.com/contest/1463/submission/101522843
 * Solved: 2020-12-17 (CONTESTANT)
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
	testc
	{
		ll a,b,c;
		cin>>a>>b>>c;
		
		if((a+b+c)%9==0 && (a+b+c)/9<=min(a,min(b,c)))
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}


}
