/*
 * Codeforces 1509A - Average Height
 * Rating: 800 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1509/A
 * Submission: https://codeforces.com/contest/1509/submission/128567605
 * Solved: 2021-09-12 (VIRTUAL)
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
		vector<int> v1,v2;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a&1)
				v1.pb(a);
			else
				v2.pb(a);
		}
		
		for(auto x:v1)
			cout<<x<<" ";
		for(auto x:v2)
			cout<<x<<" ";
		cout<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
