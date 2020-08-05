/*
 * Codeforces 1399A - Remove Smallest
 * Rating: 800 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1399/A
 * Submission: https://codeforces.com/contest/1399/submission/88967146
 * Solved: 2020-08-05 (CONTESTANT)
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
	
	testc
	{
		int tab[N]={0},n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		sort(tab,tab+n);
		int v=0;
		for(int i=0;i<n-1;i++)
		{
			if(tab[i]+1<tab[i+1])
			{
				
				cout<<"NO\n";
				v=1;
				break;
			}
		}
		if(v==0)
			cout<<"YES\n";
		
	}

}
