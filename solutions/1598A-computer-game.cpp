/*
 * Codeforces 1598A - Computer Game
 * Rating: 800 | Tags: brute force, dfs and similar, dp, implementation
 * Problem:    https://codeforces.com/problemset/problem/1598/A
 * Submission: https://codeforces.com/contest/1598/submission/131459547
 * Solved: 2021-10-10 (PRACTICE)
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
		
		string ch1,ch2;
		
		cin>>ch1>>ch2;
		int v=0;
		for(int i=0;i<n;i++)
		{
			if(ch1[i]=='1' && ch2[i]=='1')
				v=1;
		}
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	
	}


}
