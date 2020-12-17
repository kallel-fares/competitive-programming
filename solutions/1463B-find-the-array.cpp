/*
 * Codeforces 1463B - Find The Array
 * Rating: 1400 | Tags: bitmasks, constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1463/B
 * Submission: https://codeforces.com/contest/1463/submission/101589426
 * Solved: 2020-12-17 (PRACTICE)
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
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			int j=1;	
			while(a>j && j<536870912)
			{
				j<<=1;
			}
			if(abs(j-a)>a/2)
				cout<<j/2<<" ";
			else
				cout<<j<<" ";
		}
		cout<<"\n";
		
	}


}
