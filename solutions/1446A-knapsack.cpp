/*
 * Codeforces 1446A - Knapsack
 * Rating: 1300 | Tags: constructive algorithms, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1446/A
 * Submission: https://codeforces.com/contest/1446/submission/102727283
 * Solved: 2020-12-30 (PRACTICE)
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
		ll w;
		cin>>n>>w;
		vector <pair<int,int>> vect;
		
		for(int i=0;i<n;i++)
		{
			int a;
			
			cin>>a;
			vect.pb(make_pair(a,i+1));
			
		}
			
		sort(vect.begin(),vect.end(),greater<pair<int,int>>());
		int i=0;
		while(vect[i].first>w)
		{
			i++;
		}
		ll s=0;
		vector <int> ans;
		while(i<n && s<w/2+w%2)
		{
			s+=vect[i].first;
			ans.pb(vect[i].second);
			i++;
		}
		
		if(s>=w/2+w%2)
		{
			
			cout<<ans.size()<<"\n";
			for(auto x:ans)
			{
				cout<<x<<" ";
			}
			cout<<"\n";
			
			
		}
		else
		{
			cout<<"-1\n";
		}
		
		//memset(tab,0,4*(n+1));
	
	}


}
