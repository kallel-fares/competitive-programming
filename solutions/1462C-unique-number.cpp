/*
 * Codeforces 1462C - Unique Number
 * Rating: 900 | Tags: brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1462/C
 * Submission: https://codeforces.com/contest/1462/submission/101331303
 * Solved: 2020-12-15 (CONTESTANT)
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
	testc
	{
		int n;
		vector<int> ans;
		cin>>n;
		if(n>45)
			cout<<-1;
		else
		{
			int i=9;
			while(n-i>0)
			{
				ans.pb(i);
				n-=i;
				i--;
			}
			ans.pb(n);
			
		}
		sort(ans.begin(),ans.end());
		
		for(auto x:ans)
			cout<<x;
		cout<<"\n";
	}


}
