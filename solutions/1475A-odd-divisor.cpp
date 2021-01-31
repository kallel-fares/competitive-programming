/*
 * Codeforces 1475A - Odd Divisor
 * Rating: 900 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1475/A
 * Submission: https://codeforces.com/contest/1475/submission/106125036
 * Solved: 2021-01-31 (VIRTUAL)
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
		
		ll a;
		cin>>a;
		while(a%2==0)
		{
			a/=2;
		}
		if(a==1)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
