/*
 * Codeforces 1277B - Make Them Odd
 * Rating: 1200 | Tags: greedy, number theory
 * Problem:    https://codeforces.com/problemset/problem/1277/B
 * Submission: https://codeforces.com/contest/1277/submission/97562495
 * Solved: 2020-11-03 (PRACTICE)
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
	testc
	{
		int a,ans=0,n;
		set <int> s;
		map <int,int> d;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			s.insert(a);
		}
		
		
		
		
		
		
		
		for(auto x:s)
		{
			//cout<<x<<" ";	
			int j=1<<29;
			while(j>1)
			{
				//cout<<j<<" ";
				if(x%j==0)
				{
					
					d[x/j]=max(d[x/j],(int)log2(j));
				//	cout<<d[x/j]<<" "<<x/j<<"\n";
					break;
				}
				
				j/=2;
			}
		}
		
		for(auto x:d)
		{
			//cout<<x.first<<" "<<x.second<<"\n";
			ans+=x.second;
		}
		
		cout<<ans<<"\n";
		
	}


}
