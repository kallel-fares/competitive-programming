/*
 * Codeforces 1227B - Box
 * Rating: 1200 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1227/B
 * Submission: https://codeforces.com/contest/1227/submission/100688702
 * Solved: 2020-12-08 (PRACTICE)
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
	testc
	{
		int n,tab[N],freq[N],ans[N],v=0,k=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		memset(ans,0,4*(n+1));
		
		memset(freq,0,4*(n+1));
		ans[0]=tab[0];
		freq[tab[0]]++;
		for(int i=1;i<n;i++)
		{
			if(tab[i]!=tab[i-1])
			{
				ans[i]=tab[i];
				freq[tab[i]]++;
			}
			else
			{
				for(int j=k;j<=tab[i];j++)
				{
					if(!freq[j])
					{
						ans[i]=j;
						freq[j]++;
						k=j+1;
						break;
					}
				}
				if(!ans[i])
				{
					v=1;
				}
			}
		}
		if(v)
		{
			cout<<"-1\n";
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				cout<<ans[i]<<" ";
			}
			cout<<"\n";
		}
	}


}
