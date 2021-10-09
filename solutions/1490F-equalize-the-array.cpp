/*
 * Codeforces 1490F - Equalize the Array
 * Rating: 1500 | Tags: binary search, data structures, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1490/F
 * Submission: https://codeforces.com/contest/1490/submission/131363451
 * Solved: 2021-10-09 (PRACTICE)
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
		
		map<int,int> freq;
		
		vector<int>vec;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			freq[a]++;
		}
		
		for(auto x:freq)
		{
			vec.pb(x.second);
		}
		
		
		sort(vec.begin(),vec.end());
		
		
		int mini=n+1;
		for(int i=0;i<vec.size();i++)
		{
			mini=min(mini,n-vec[i]*((int)vec.size()-i));
		}
		
		
		cout<<mini<<"\n";
		
		
			
		
	
	}


}
