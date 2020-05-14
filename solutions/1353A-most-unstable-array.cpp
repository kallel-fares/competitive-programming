/*
 * Codeforces 1353A - Most Unstable Array
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1353/A
 * Submission: https://codeforces.com/contest/1353/submission/80089525
 * Solved: 2020-05-14 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,m;
		cin>>n>>m;
		if(n>2)
		{
			cout<<m*2;
		}
		else if(n==2)
		{
			cout<<m;
		}
		else
			cout<<"0";
		cout<<"\n";
	}

}
