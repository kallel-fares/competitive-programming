/*
 * Codeforces 1118B - Tanya and Candies
 * Rating: 1200 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1118/B
 * Submission: https://codeforces.com/contest/1118/submission/97683257
 * Solved: 2020-11-05 (PRACTICE)
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
	
	int n,e=0,o=0,odd=0,eve=0,ans=0,tab[N]={0},v=0,c=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>tab[i];
		if(i&1)
			odd+=tab[i];
		else
			eve+=tab[i];
	}
	
	
	//cout<<odd<<" "<<eve<<" ";
	
	for(int i=1;i<=n;i++)
	{
		
		if(i&1)
		{
			
			o+=tab[i];
			v=tab[i];
			c=0;
		}
		else
		{
			e+=tab[i];
			c=tab[i];
			v=0;
			
		}
		
		
		//cout<<i<<" "<<e+odd-o<<" "<<o+eve-e<<"\n";
		if(e+odd-o-c==o+eve-e-v)
			ans++;		
	
		
	}	
	cout<<ans;
	


}
