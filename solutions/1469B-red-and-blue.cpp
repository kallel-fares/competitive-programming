/*
 * Codeforces 1469B - Red and Blue
 * Rating: 1000 | Tags: dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1469/B
 * Submission: https://codeforces.com/contest/1469/submission/102584071
 * Solved: 2020-12-28 (CONTESTANT)
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

	//freopen("","r",stdin);
	testc
	{
		int tab[105]={0},tab1[105]={0},n,m;
		
		cin>>n;
			
		int maxi=0,ans1=0,maxi1=0;
		int ans2=0;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			ans1+=a;
			maxi=max(maxi,ans1);
		}
			
			
		cin>>m;
		
		for(int i=0;i<m;i++)
		{
			int a;
			cin>>a;
			ans2+=a;
			maxi1=max(maxi1,ans2);
		}
	
		cout<<maxi1+maxi<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
