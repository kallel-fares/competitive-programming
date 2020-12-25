/*
 * Codeforces gym102267K - Birthday Puzzle
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102267/problem/K
 * Submission: https://codeforces.com/gym/102267/submission/102320183
 * Solved: 2020-12-25 (PRACTICE)
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
	
	int n,tab[40]={0};
	cin>>n;
	
	for(int i=0;i<n;i++)
		cin>>tab[i];
		
	ll ans=0;	
	
	for (int b = 0; b < (1<<n); b++) 
	{
		vector<int> subset;
		for (int i = 0; i < n; i++) 
		{
			if (b&(1<<i)) subset.push_back(i);
		}
		ll aux=0;
		for(auto x:subset)
		{
			//cout<<tab[x]<<" ";
			aux|=tab[x];
		}
		//cout<<"\n";
		ans+=aux;
	}

	cout<<ans<<"\n";
	



}
