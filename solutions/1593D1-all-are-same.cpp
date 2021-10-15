/*
 * Codeforces 1593D1 - All are Same
 * Rating: 1100 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1593/D1
 * Submission: https://codeforces.com/contest/1593/submission/132024436
 * Solved: 2021-10-15 (VIRTUAL)
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
		set<int>se;
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		sort(vec.begin(),vec.end());
		
		for(int i=0;i<n-1;i++)
		{
			if(vec[i+1]-vec[i]!=0)
				se.insert(vec[i+1]-vec[i]);
		}
		
		if(se.size()==0)
		{
		
			cout<<"-1\n";
			continue;	
		}
		
		int ans=0;
		for(auto x:se)
			ans=__gcd(x,ans);
			
			
		cout<<ans<<"\n";
		
		
		
	}


}
