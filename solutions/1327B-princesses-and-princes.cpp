/*
 * Codeforces 1327B - Princesses and Princes
 * Rating: 1200 | Tags: brute force, graphs, greedy
 * Problem:    https://codeforces.com/problemset/problem/1327/B
 * Submission: https://codeforces.com/contest/1327/submission/97547884
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

const int N=1e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	testc
	{
		int n,count=1,ans=0,a,b,freq[N]={0},pf,v;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v=0;
			for(int j=0;j<a;j++)
			{
				cin>>b;
				if(j<count && !v)
				{
					if(!freq[b])
					{
						v=1;
						freq[b]++;
						
					}
				}
			}
			if(!v)
			{
				pf=i+1;
			}
			count++;
		}
		v=0;
		for(int i=1;i<=n;i++)
		{
			if(!freq[i])
			{
				v=i;
				break;
			}
		
		}
		
		
		if(v)
		{
			cout<<"IMPROVE\n"<<pf<<" "<<v<<"\n";
		}
		else
		{
			cout<<"OPTIMAL\n";
		}
	
	}


}
