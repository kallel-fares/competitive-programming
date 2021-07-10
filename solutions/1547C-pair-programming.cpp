/*
 * Codeforces 1547C - Pair Programming
 * Rating: 1100 | Tags: greedy, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1547/C
 * Submission: https://codeforces.com/contest/1547/submission/121972388
 * Solved: 2021-07-10 (CONTESTANT)
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
		int k,n,m,v=0;
		
		vector<int> veca,vecb,ans;
		cin>>k>>n>>m;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			veca.pb(a);
		}
		
		for(int i=0;i<m;i++)
		{
			int a;
			cin>>a;
			vecb.pb(a);
		}
		
		int i=0,j=0;
		
		while(i<n && j<m)
		{
			if(veca[i]==0)
			{
				ans.pb(0);
				
				i++;
			}
			else if(vecb[j]==0)
			{
				ans.pb(0);
				
				j++;
			}
			else
			{
				if(veca[i]<vecb[j])
				{
					ans.pb(veca[i]);
					i++;
				}
				else
				{
					ans.pb(vecb[j]);
					j++;
				}
			}
		}
		
		if(i==n)
			while(j<m)
			{
				ans.pb(vecb[j]);
				j++;
			}
		else
		{
			while(i<n)
			{
				ans.pb(veca[i]);
				i++;
			}
		}
		
		for(auto x:ans)
		{
			if(x==0)
				k++;
			else
			{
				if(x>k)
					v=1;
			}
		}
		
		if(v)
			cout<<"-1\n";
		else
		{
			for(auto x:ans)
				cout<<x<<" ";
			cout<<"\n";
		}
		
		
		
		
	}


}
