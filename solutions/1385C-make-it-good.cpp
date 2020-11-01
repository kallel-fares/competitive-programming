/*
 * Codeforces 1385C - Make It Good
 * Rating: 1200 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1385/C
 * Submission: https://codeforces.com/contest/1385/submission/97372112
 * Solved: 2020-11-01 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,tab[N]={0},v=0,ans=0;
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		for(int i=n-1;i>=1;i--)
		{
			if(tab[i]>tab[i-1])
			{
				v=1;
			}
			else if (tab[i]<tab[i-1])
			{
				if(v)
				{
					ans=i;
					break;
				}
			}
		}
		
		cout<<ans<<"\n";
		
		
	}


}
