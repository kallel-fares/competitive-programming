/*
 * Codeforces 1529A - Eshag Loves Big Arrays
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1529/A
 * Submission: https://codeforces.com/contest/1529/submission/129778249
 * Solved: 2021-09-24 (PRACTICE)
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
		
		
		map<int,int> freq;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			freq[a]++;
		}
	
		cout<<n-(*freq.begin()).second<<"\n";
	}


}
