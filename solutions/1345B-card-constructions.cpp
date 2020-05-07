/*
 * Codeforces 1345B - Card Constructions
 * Rating: 1100 | Tags: binary search, brute force, dp, math
 * Problem:    https://codeforces.com/problemset/problem/1345/B
 * Submission: https://codeforces.com/contest/1345/submission/79224699
 * Solved: 2020-05-07 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	testc
	{
		int n;
		cin>>n;
		
		int s=0;
		while(n>=2)
		{
			int i=1,v=0;
			while(n-(3*i-1)>=0)
			{
				//cout<<"bro";
				v=1;
				n-=3*i-1;
				i++;
			}
			if(v==1)
				s++;
		}
		cout<<s<<"\n";
		
		
		
	}
}
