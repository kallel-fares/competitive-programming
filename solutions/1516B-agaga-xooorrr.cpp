/*
 * Codeforces 1516B - AGAGA XOOORRR
 * Rating: 1500 | Tags: bitmasks, brute force, dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1516/B
 * Submission: https://codeforces.com/contest/1516/submission/113927108
 * Solved: 2021-04-22 (PRACTICE)
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
		
		vector<ll> vec(n),vec1(n),vec2(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		vec1[0]=vec[0];
		for(int i=1;i<n;i++)
		{
			vec1[i]=vec1[i-1]^vec[i];
		}
		
		
		vec2[n-1]=vec[n-1];
		for(int i=n-2;i>=0;i--)
		{
			vec2[i]=vec2[i+1]^vec[i];
		}
		
		
		
		
		
		
		
		/*for(auto x:vec1)
			cout<<x<<" ";
		cout<<"\n";
		for(auto x:vec2)
			cout<<x<<" ";
		cout<<"\n";*/
		
		int v=0;
		for(int i=0;i<n;i++)
		{
			int j=i+1;
			while(j<n)
			{
				if(vec1[i]==vec2[j])
				{
					if(j==i+1)
						v=1;
					if(vec1[j-1]==0)
					{
						v=1;
					}
					
					
				}
				j++;
				
			}
		}
		
		
		
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
 
 
}
