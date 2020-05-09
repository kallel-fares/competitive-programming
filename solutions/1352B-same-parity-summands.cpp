/*
 * Codeforces 1352B - Same Parity Summands
 * Rating: 1200 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1352/B
 * Submission: https://codeforces.com/contest/1352/submission/79523054
 * Solved: 2020-05-09 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,k,v=0;
		cin>>n>>k;
		int i=1;
		
		if((n-k+1)&1 && (n-k+1)>0)
		{
			cout<<"YES\n";
			cout<<n-k+1<<" ";
			for(int i=1;i<k;i++)
				cout<<"1 ";
			v=1;
		}
		if(!((n-k*2+2)&1) && v!=1 && (n-k*2+2)>0)
		{
			cout<<"YES\n";
			cout<<n-k*2+2<<" ";
			for(int i=1;i<k;i++)
				cout<<"2 ";
			v=1;
		}
		if(v==0)
			cout<<"NO";
			
		cout<<"\n";
	}
	

}
