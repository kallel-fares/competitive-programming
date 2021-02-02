/*
 * Codeforces 1478A - Nezzar and Colorful Balls
 * Rating: 800 | Tags: brute force, greedy
 * Problem:    https://codeforces.com/problemset/problem/1478/A
 * Submission: https://codeforces.com/contest/1478/submission/106305067
 * Solved: 2021-02-02 (VIRTUAL)
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
		
		int n,a,maxi=0;
		cin>>n;
		map<int,int> freq;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			freq[a]++;
		}
		
		for(auto x:freq)
		{
			maxi=max(maxi,x.second);
		}
		
		cout<<maxi<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
