/*
 * Codeforces 1461A - String Generation
 * Rating: 800 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1461/A
 * Submission: https://codeforces.com/contest/1461/submission/100917365
 * Solved: 2020-12-11 (CONTESTANT)
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
		int n,k;
		cin>>n>>k;
		for(int i=0;i<k;i++)
			cout<<'a';
		for(int i=k;i<n;i++)
			cout<<(char)('a'+(i-k+1)%3);
		cout<<"\n";
	}


}
