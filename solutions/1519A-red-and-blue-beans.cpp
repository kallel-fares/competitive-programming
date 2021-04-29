/*
 * Codeforces 1519A - Red and Blue Beans
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1519/A
 * Submission: https://codeforces.com/contest/1519/submission/114546279
 * Solved: 2021-04-29 (CONTESTANT)
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
		ll r,b,d;
		cin>>r>>b>>d;
		
		ll aux=max(r,b)/min(r,b)+min(1LL,max(r,b)%min(r,b));
		
		if(aux-1>d)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	
	}


}
