/*
 * Codeforces 1119B - Alyona and a Narrow Fridge
 * Rating: 1300 | Tags: binary search, flows, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1119/B
 * Submission: https://codeforces.com/contest/1119/submission/107127451
 * Solved: 2021-02-11 (PRACTICE)
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

	int n,h;
	cin>>n>>h;
	
	vector<int> vec(n),vec2;
	
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	
	}
	ll s=0;
	for(int i=0;i<n;i++)
	{
		s=0;
		vec2.pb(vec[i]);
		sort(vec2.begin(),vec2.end(),greater<int>());
		for(int j=0;j<vec2.size();j+=2)
		{
			s+=vec2[j];
		}
		if(s>h)
		{
			cout<<i;
			return 0;
		}
		
		
	
	}
	cout<<n;

}
