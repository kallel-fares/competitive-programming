/*
 * Codeforces 1526B - I Hate 1111
 * Rating: 1400 | Tags: dp, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1526/B
 * Submission: https://codeforces.com/contest/1526/submission/129937904
 * Solved: 2021-09-26 (PRACTICE)
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
		int ch;
		
		cin>>ch;
		
		
		
		if(ch-111*(ch%11)>=0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}


}
