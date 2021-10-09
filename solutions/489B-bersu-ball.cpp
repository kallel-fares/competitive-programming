/*
 * Codeforces 489B - BerSU Ball
 * Rating: 1200 | Tags: dfs and similar, dp, graph matchings, greedy, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/489/B
 * Submission: https://codeforces.com/contest/489/submission/131311439
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

	
		int n,m;
		
		cin>>n;
		
		vector<int> vec(n);
		
		for(int i=0;i<n;i++)
			cin>>vec[i];
		
		cin>>m;
		
		
		vector<int> vec1(m);
		
		
		for(int i=0;i<m;i++)
			cin>>vec1[i];
			
		sort(vec.begin(),vec.end());
		sort(vec1.begin(),vec1.end());
		
		
		
		
		
		int i=0,ans=0,j=0;
		while(i<n && j<m)
		{
			
			if(abs(vec[i]-vec1[j])<=1)
			{
				ans++;
				i++;
				j++;
				continue;
			}
			
			if(vec[i]>vec1[j])
			{
				j++;
			}
			else
			{
				i++;
			}
			
			
			
		}
		
		
		cout<<ans;
		
		
	


}
