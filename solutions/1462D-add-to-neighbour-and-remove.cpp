/*
 * Codeforces 1462D - Add to Neighbour and Remove
 * Rating: 1400 | Tags: greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1462/D
 * Submission: https://codeforces.com/contest/1462/submission/101425170
 * Solved: 2020-12-16 (PRACTICE)
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
		map <ll,int> m;
		int n;
		ll l=0;
		
		cin>>n;
		
		
		int ans=n-1;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			l+=a;
			m[l]++;
		}
		
		
		for(int i=1;i<=l/2;i++)
		{
			if(l%i==0)
			{
				int v=0;
				for(int j=l;j>0;j-=i)
				{
					if(!m[j])
					{
						v=1;
						break;
					}
				}
				if(!v)
				{
					ans=n-l/i;
					break;
				}
			}
		}
		cout<<ans<<"\n";
		
		
		
		
		
		
	
	}


}
