/*
 * Codeforces 1365C - Rotation Matching
 * Rating: 1400 | Tags: constructive algorithms, data structures, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1365/C
 * Submission: https://codeforces.com/contest/1365/submission/109321894
 * Solved: 2021-03-07 (PRACTICE)
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
	
	int n,maxi=0;
	cin>>n;
	vector<int> vec(n),freq(n+1),ans(n);
	
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		freq[a]=i;
	}
	
	
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		ans[(freq[a]-i+n)%n]++;
		maxi=max(maxi,ans[(freq[a]-i+n)%n]);
	}
	
	cout<<maxi;
	
	
	
	
	
	
	
	
	
	
	
	
	
	


}
