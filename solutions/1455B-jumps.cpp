/*
 * Codeforces 1455B - Jumps
 * Rating: 1200 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1455/B
 * Submission: https://codeforces.com/contest/1455/submission/100007269
 * Solved: 2020-11-30 (CONTESTANT)
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
	
		int x;
		cin>>x;
		
		int k=1;
		while((k*(k+1))/2<x)
		{
			k++;
		}
		if((k*(k+1))/2==x+1)
			cout<<k+1<<"\n";
		else
			cout<<k<<"\n";
		
		
		
		
		
		
		
	}


}
