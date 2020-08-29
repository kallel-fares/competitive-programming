/*
 * Codeforces 961A - Tetris
 * Rating: 900 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/961/A
 * Submission: https://codeforces.com/contest/961/submission/91294000
 * Solved: 2020-08-29 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		int n,m,a,mini=10001,tab[1001]={0};
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a;
			tab[a]++;
		}
		
		for(int i=1;i<=n;i++)
		{
			mini=min(tab[i],mini);
		}
		cout<<mini;
		
	

}
