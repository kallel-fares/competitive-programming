/*
 * Codeforces 1133B - Preparation for International Women's Day
 * Rating: 1200 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1133/B
 * Submission: https://codeforces.com/contest/1133/submission/97660214
 * Solved: 2020-11-04 (PRACTICE)
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
	
	
	map <int,int> freq;
	int n,k,tab[N]={0};
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
		freq[tab[i]%k]++;
		
			
	}
		
	int ans=freq[0]/2;
	//cout<<freq[0]<<" ";
	for(int i=1;i<=k/2;i++)
	{
		if(i==k-i)
		{
			ans+=freq[i]/2;
		}
		else
		{
			ans+=min(freq[i],freq[k-i]);	
		}
	}	
	cout<<ans*2;


}
