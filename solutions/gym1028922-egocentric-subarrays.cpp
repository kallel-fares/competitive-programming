/*
 * Codeforces gym1028922 - Egocentric Subarrays
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102892/problem/2
 * Submission: https://codeforces.com/gym/102892/submission/101849943
 * Solved: 2020-12-20 (PRACTICE)
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

const int INF=1e9+4;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,maxi=0,mini=INF,tab[140]={0};
	
	cin>>n>>m;
	
	int ans=0;
	
	for(int i=0;i<n;i++)
		cin>>tab[i];
		
	for(int i=0;i<n;i++)
	{
		maxi=mini=tab[i];
		
		for(int j=i+1;j<n;j++)
		{
			maxi=max(maxi,tab[j]);
			mini=min(mini,tab[j]);
			if(maxi-mini==m)
				ans++;
		}
	}
		
	cout<<ans;
		
		
		
		
		
		
		
		
		
		
		
		


}
