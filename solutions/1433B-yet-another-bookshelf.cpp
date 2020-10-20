/*
 * Codeforces 1433B - Yet Another Bookshelf
 * Rating: 800 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1433/B
 * Submission: https://codeforces.com/contest/1433/submission/96101552
 * Solved: 2020-10-20 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
const int N=2e+5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,tab[N]={0},zero=0,ans=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>tab[i];
		int i=0;
		while(tab[i]==0)
		{
			i++;
		}
		i++;
		for(;i<n;i++)
		{
			if(tab[i]==0)
				zero++;
			else
				ans+=zero,zero=0;
				
		}
		cout<<ans<<"\n";
	}

}
