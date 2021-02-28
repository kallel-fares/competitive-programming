/*
 * Codeforces 1491B - Minimal Cost
 * Rating: 1200 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1491/B
 * Submission: https://codeforces.com/contest/1491/submission/108685188
 * Solved: 2021-02-28 (CONTESTANT)
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
		int n,u,v;
		cin>>n>>u>>v;
		vector<int> vec(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		int maxi=0;
		for(int i=0;i<n-1;i++)
		{
			maxi=max(maxi,abs(vec[i]-vec[i+1]));
		}
		
		if(maxi>1)
			cout<<"0";
		else if(maxi==1)
		{
			cout<<min(u,v);
		}
		else
		{
			cout<<v+min(u,v);
		}
		cout<<"\n";
	
	}


}
