/*
 * Codeforces gym1028924 - Park Fountains
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102892/problem/4
 * Submission: https://codeforces.com/gym/102892/submission/101853417
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

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,q,tab[N]={0},freq[N]={0};
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
	}
	
	for(int i=0;i<q;i++)
	{
		int a;
		cin>>a;
		freq[a-1]++;
		
	}
	
	/*for(int i=0;i<=q;i++)
		cout<<freq[i]<<" ";*/
	
	int v=0,ans=0;
	for(int i=n-1;i>=0;i--)
	{
		v+=freq[i];
		if(tab[i]-v<=0)
			ans++;
			
	}
	cout<<ans;
	
	
	
	
	
	
	
	
	
	
	
	


}
