/*
 * Codeforces 1355B - Young Explorers
 * Rating: 1200 | Tags: dp, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1355/B
 * Submission: https://codeforces.com/contest/1355/submission/100288884
 * Solved: 2020-12-03 (PRACTICE)
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
	cin.tie(NULL),cout.tie(NULL);
	
	int tab[N]={0};
	
	testc
	{
		int n,ans=0,a,maxi=0;
		cin>>n;
		
		for(int i=0;i<=n;i++)tab[i]=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>a;
			maxi=max(maxi,a);
			tab[a]++;
		}
		
		for(int i=1;i<=maxi;i++)
		{
			ans+=tab[i]/i;
			tab[i+1]+=tab[i]%i;
		}
		cout<<ans<<"\n";
		
	}


}
