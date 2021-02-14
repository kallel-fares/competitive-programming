/*
 * Codeforces 1476A - K-divisible Sum
 * Rating: 1000 | Tags: binary search, constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1476/A
 * Submission: https://codeforces.com/contest/1476/submission/107365863
 * Solved: 2021-02-14 (VIRTUAL)
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
		int a,b;
		cin>>a>>b;
		
		b=(a/b+min(1,a%b))*b;
		
		cout<<b/a+min(1,b%a)<<"\n";
	}


}
