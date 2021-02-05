/*
 * Codeforces 1481B - New Colony
 * Rating: 1100 | Tags: brute force, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1481/B
 * Submission: https://codeforces.com/contest/1481/submission/106588273
 * Solved: 2021-02-05 (CONTESTANT)
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
		int n,k,v=-1;
		cin>>n>>k;
		vector<int> vec(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			
		}
		
		while(k!=0)
		{
			int s=0;
			for(int i=0;i<n-1;i++)
			{
				if(vec[i]<vec[i+1])
				{
					vec[i]++;
					v=i+1;
					s=1;
					break;
					//cout<<i+1<<" ";
				}
			}
			if(!s)
			{
				v=-1;
				break;
			}
			k--;
		}
		
		
		
		cout<<v<<"\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
