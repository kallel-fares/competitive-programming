/*
 * Codeforces 1525A - Potion-making
 * Rating: 800 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1525/A
 * Submission: https://codeforces.com/contest/1525/submission/124251658
 * Solved: 2021-07-30 (VIRTUAL)
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
		int n;
		cin>>n;
		
		cout<<100/__gcd(n,100)<<"\n";
	
	}


}
