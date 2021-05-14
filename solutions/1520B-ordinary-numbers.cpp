/*
 * Codeforces 1520B - Ordinary Numbers
 * Rating: 800 | Tags: brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1520/B
 * Submission: https://codeforces.com/contest/1520/submission/116207885
 * Solved: 2021-05-14 (VIRTUAL)
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
		
		int n;
		cin>>n;
		int ans=((int)log10(n))*9;
		
		int aux=1;
		for(int i=0;i<(int)log10(n);i++)
		{
			aux=aux*10+1;
		}
		
		cout<<ans+n/aux<<"\n";
	
	}


}
