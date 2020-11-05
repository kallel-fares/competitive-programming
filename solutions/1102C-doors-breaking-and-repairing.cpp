/*
 * Codeforces 1102C - Doors Breaking and Repairing
 * Rating: 1200 | Tags: games
 * Problem:    https://codeforces.com/problemset/problem/1102/C
 * Submission: https://codeforces.com/contest/1102/submission/97686202
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

	int n,x,y,tab[N]={0},count=0;
	cin>>n>>x>>y;
	
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
		if(tab[i]<=x)
			count++;
	}
	
	if(x>y)
		cout<<n;
	else
	{
		cout<<count/2+count%2;
		
		
		
		
	}
		
	


}
