/*
 * Codeforces 1527A - And Then There Were K
 * Rating: 800 | Tags: bitmasks
 * Problem:    https://codeforces.com/problemset/problem/1527/A
 * Submission: https://codeforces.com/contest/1527/submission/128338656
 * Solved: 2021-09-09 (VIRTUAL)
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
		
		
		cout<<(int)pow(2,(ll)log2(n))-1<<"\n";
	}


}
