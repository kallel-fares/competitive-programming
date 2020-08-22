/*
 * Codeforces 1401A - Distance and Axis
 * Rating: 900 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1401/A
 * Submission: https://codeforces.com/contest/1401/submission/90690884
 * Solved: 2020-08-22 (VIRTUAL)
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
		int n,k;
		
		cin>>n>>k;
		if(k>=n)
			cout<<k-n<<"\n";
		else
			if(n%2==k%2)
				cout<<"0\n";
			else
				cout<<"1\n";
	}
}
