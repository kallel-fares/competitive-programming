/*
 * Codeforces 1581B - Diameter of Graph
 * Rating: 1200 | Tags: constructive algorithms, graphs, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1581/B
 * Submission: https://codeforces.com/contest/1581/submission/130356104
 * Solved: 2021-09-30 (CONTESTANT)
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
		ll n,m,k;
		
		cin>>n>>m>>k;
		
		
		if(m<n-1 || m>(n*(n-1))/2 || k<=1)
		{
			cout<<"NO\n";
			continue;
		}
		
		
		if(k==2)
		{
			if(m==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else if(k==3)
		{
			if(m==(n*(n-1))/2)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
		
	
	}


}
