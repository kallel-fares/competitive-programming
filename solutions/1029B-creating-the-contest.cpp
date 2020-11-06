/*
 * Codeforces 1029B - Creating the Contest
 * Rating: 1200 | Tags: dp, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1029/B
 * Submission: https://codeforces.com/contest/1029/submission/97763685
 * Solved: 2020-11-06 (PRACTICE)
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
	
	int n,ans=1,tab[N]={0},maxi=1;
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i];
		for(int i=0;i<n-1;i++)
		{
			
			if(tab[i]*2>=tab[i+1])
			{
				//cout<<tab[i]<<" "<<tab[i+1]<<"\n";
				ans++;
				maxi=max(maxi,ans);
			}
			else
			{
				ans=1;
			}
			
		}
	
	cout<<maxi;


}
