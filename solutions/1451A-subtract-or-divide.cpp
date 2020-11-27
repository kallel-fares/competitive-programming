/*
 * Codeforces 1451A - Subtract or Divide
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1451/A
 * Submission: https://codeforces.com/contest/1451/submission/99734205
 * Solved: 2020-11-27 (VIRTUAL)
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
		int n;
		cin>>n;
		if(n==1)
			cout<<"0";
		else 
			if(n&1)
				if(n==3)
					cout<<"2";
				else
					cout<<"3";
			else
			{
				if(n==2)
					cout<<"1";
				else
					cout<<"2";
			}
		cout<<"\n";
	}


}
