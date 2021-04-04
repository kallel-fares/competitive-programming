/*
 * Codeforces 1468N - Waste Sorting
 * Rating: 900 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1468/N
 * Submission: https://codeforces.com/contest/1468/submission/112033994
 * Solved: 2021-04-04 (PRACTICE)
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
		vector<int> vec1,vec2;
		int v=0;
		for(int i=0;i<3;i++)
		{
			int a;
			cin>>a;
			vec1.pb(a);
		}
		
		for(int i=0;i<3;i++)
		{
			int a;
			cin>>a;
			vec1[i]-=a;
			if(vec1[i]<0)
				v=1;
		}
		int a4,a5;
		cin>>a4>>a5;
		if(v)
		{
			cout<<"NO\n";
		}
		else
		{
			vec1[0]-=a4;
			vec1[2]+=min(0,vec1[0]);
			
			vec1[1]-=a5;
			vec1[2]+=min(0,vec1[1]);
			if(vec1[2]>=0)
			{
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
			
			
		}
	}
 
 
}
