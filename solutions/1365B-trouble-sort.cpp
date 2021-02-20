/*
 * Codeforces 1365B - Trouble Sort
 * Rating: 1300 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1365/B
 * Submission: https://codeforces.com/contest/1365/submission/108060575
 * Solved: 2021-02-20 (PRACTICE)
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
		int n,one=0,v=0;
		cin>>n;
		
		vector<int>vec(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a)
			{
				one++;
			}
		}
		
		for(int i=0;i<n-1;i++)
		{
			if(vec[i]>vec[i+1])
				v=1;
		}
		
		if(v && (one==0 || one==n))
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
		
		
	
	}


}
