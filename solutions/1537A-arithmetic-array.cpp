/*
 * Codeforces 1537A - Arithmetic Array
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1537/A
 * Submission: https://codeforces.com/contest/1537/submission/131345847
 * Solved: 2021-10-09 (VIRTUAL)
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
		
		ll s=0;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			s+=a;
		}
		
		if(s-n==0)
		{
			
			cout<<"0\n";
			continue;
		}
		cout<<max(s-n,1LL)<<"\n";
		
	}


}
