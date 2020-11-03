/*
 * Codeforces 1315C - Restoring Permutation
 * Rating: 1200 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1315/C
 * Submission: https://codeforces.com/contest/1315/submission/97552231
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
		
		int n,freq[500]={0},tab[500]={0},v=0,ans[500]={0};
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			if(freq[tab[i]])
			{
				v=1;
			}
			else
			{
				freq[tab[i]]++;
			}
		}
		
		
		/*for(int i=1;i<=n*2;i++)
			cout<<freq[i]<<" ";*/
		for(int i=0;i<n;i++)
		{
			ans[i*2+1]=tab[i];
			for(int j=tab[i]+1;j<=2*n;j++)
			{
				if(!freq[j])
				{
					ans[i*2+2]=j;
					freq[j]++;
					break;
				}
			}
		}
		
		
		for(int i=1;i<=n*2;i++)
		{
			if(!freq[i])
			{
				v=1;
				break;
			}
		}
		
		if(v)
		{
			cout<<"-1\n";
		}
		else
		{
			for(int i=1;i<=2*n;i++)
				cout<<ans[i]<<" ";
			cout<<"\n";
		}
	
	}


}
