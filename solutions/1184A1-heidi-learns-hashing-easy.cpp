/*
 * Codeforces 1184A1 - Heidi Learns Hashing (Easy)
 * Rating: 1200 | Tags: brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1184/A1
 * Submission: https://codeforces.com/contest/1184/submission/97619149
 * Solved: 2020-11-04 (PRACTICE)
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
	
	
	
	
	ll n;
	cin>>n;
	
	
		
	ll x=1;
	while(n-1-x-x*x>=0)
	{
		if((n-1-x-(x*x))%(2*x)==0 && (n-1-x-x*x)/(2*x)!=0)
		{
			cout<<x<<" "<<(n-1-x-x*x)/(2*x);
			return 0;
			
		}
		
		x++;
		
	}
	
	cout<<"NO";
	
	
			
	


}
