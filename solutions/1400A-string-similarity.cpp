/*
 * Codeforces 1400A - String Similarity
 * Rating: 800 | Tags: constructive algorithms, strings
 * Problem:    https://codeforces.com/problemset/problem/1400/A
 * Submission: https://codeforces.com/contest/1400/submission/95824076
 * Solved: 2020-10-17 (VIRTUAL)
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
	testc
	{
		int n;
		string ch;
		cin>>n;
		cin>>ch;
		
		for(int i=0;i<2*n-1;i+=2)
		{
			cout<<ch[i];
		}
		cout<<"\n";
		
	}

}
