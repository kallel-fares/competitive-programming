/*
 * Codeforces 1536A - Omkar and Bad Story
 * Rating: 800 | Tags: brute force, constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1536/A
 * Submission: https://codeforces.com/contest/1536/submission/130892258
 * Solved: 2021-10-05 (VIRTUAL)
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
		int n,v=0;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a<0)
				v=1;
		}
		
		if(v)
			cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			cout<<"101\n";
			for(int i=0;i<=100;i++)
				cout<<i<<" ";	
		}
		
		
			
			
	}


}
