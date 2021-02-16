/*
 * Codeforces 1490A - Dense Array
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1490/A
 * Submission: https://codeforces.com/contest/1490/submission/107552060
 * Solved: 2021-02-16 (CONTESTANT)
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
		vector<int> vec(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		int ans=0;
		for(int i=0;i<n-1;i++)
		{
			int mini=min(vec[i],vec[i+1]);
			
			int maxi=max(vec[i],vec[i+1]);
			while(mini*2<maxi)
			{
				mini*=2;
				ans++;
			}
			
		}
		cout<<ans<<"\n";
		
		
	}


}
