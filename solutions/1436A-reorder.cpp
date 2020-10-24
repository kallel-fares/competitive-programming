/*
 * Codeforces 1436A - Reorder
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1436/A
 * Submission: https://codeforces.com/contest/1436/submission/96614225
 * Solved: 2020-10-24 (VIRTUAL)
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
		
		ll n,m,tab[N]={0},a,s=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			s+=a;
		}
		if(s==m)
			cout<<"YES";
		else
			cout<<"NO";
			
		cout<<"\n";
	
	}


}
