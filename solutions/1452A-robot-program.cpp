/*
 * Codeforces 1452A - Robot Program
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1452/A
 * Submission: https://codeforces.com/contest/1452/submission/100855787
 * Solved: 2020-12-10 (VIRTUAL)
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
		int x,y;
		cin>>x>>y;
		cout<<min(x,y)*2+max((max(x,y)-min(x,y))*2-1,0)<<"\n";
	}


}
