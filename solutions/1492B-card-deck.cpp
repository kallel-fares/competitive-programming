/*
 * Codeforces 1492B - Card Deck
 * Rating: 1100 | Tags: data structures, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1492/B
 * Submission: https://codeforces.com/contest/1492/submission/108262073
 * Solved: 2021-02-23 (CONTESTANT)
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
		vector<pair<int,int>> vec;
		
		map<int,int>freq;
		
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			vec.pb(make_pair(a,0));
		}
			
			
		int maxi=0,j=1;
		for(int i=0;i<n;i++)
		{
			if(vec[i].first>maxi)
			{
				maxi=vec[i].first;
				vec[i].second=j;
				j++;
			}
		}
		
		int flag=n;
		
		for(int i=n-1;i>=0;i--)
		{
			if(vec[i].second)
			{
				for(int j=i;j<flag;j++)
				{
					cout<<vec[j].first<<" ";
				}
				flag=i;
			}
		}		
		cout<<"\n";
		
	}


}
