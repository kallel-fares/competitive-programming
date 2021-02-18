/*
 * Codeforces 1490D - Permutation Transformation
 * Rating: 1200 | Tags: dfs and similar, divide and conquer, implementation
 * Problem:    https://codeforces.com/problemset/problem/1490/D
 * Submission: https://codeforces.com/contest/1490/submission/107777630
 * Solved: 2021-02-18 (PRACTICE)
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
		int j=1,v=0;
		cin>>n;
		vector<pair<int,int>> vec;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			vec.pb(make_pair(a,0));
		}
		
		int flag=0;
		while(v!=n)
		{
			//cout<<v<<" ";
			int maxi=0,up=1;
			for(int i=flag;i<n;i++)
			{
				if(vec[i].second!=0)
				{
					flag=i+1;
					up=0;
					break;
				}
				
				maxi=max(maxi,vec[i].first);
			}
			
			for(int i=0;i<n;i++)
			{
				if(vec[i].first==maxi)
				{
					vec[i].second=j;
					v++;	
				}
			}
			
			if(up)
			{
				j++;
				flag=0;
			}
			
			
		}
		
		for(auto x:vec)
		{
			cout<<x.second-1<<" ";
		}
		cout<<"\n";
		
				
	}


}
