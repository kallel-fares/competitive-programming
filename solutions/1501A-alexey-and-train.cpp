/*
 * Codeforces 1501A - Alexey and Train
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1501/A
 * Submission: https://codeforces.com/contest/1501/submission/110842835
 * Solved: 2021-03-23 (VIRTUAL)
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
		vector<pair<ll,ll>> vec;
		
		vector<int> delay(n);
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			vec.pb(make_pair(a,b));
			
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>delay[i];	
			if(i)
				delay[i]+=vec[i].first-vec[i-1].second;
		}
		ll arr=vec[0].first,dep=0;
		for(int i=0;i<n-1;i++)
		{
			arr=max(vec[i].second,(vec[i].second-vec[i].first)/2+(vec[i].second-vec[i].first)%2+arr+delay[i]);
			//cout<<arr<<" ";
		}
		cout<<arr+delay[n-1]<<"\n";
		
		
	
	}


}
