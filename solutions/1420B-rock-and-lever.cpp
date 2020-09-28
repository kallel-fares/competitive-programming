/*
 * Codeforces 1420B - Rock and Lever
 * Rating: 1200 | Tags: bitmasks, math
 * Problem:    https://codeforces.com/problemset/problem/1420/B
 * Submission: https://codeforces.com/contest/1420/submission/94038388
 * Solved: 2020-09-28 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
const int N=70;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	testc
	{
		ll n,tab[N]={0};
		int a;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			tab[(int)(log2(a))]++;
		}
		ll s=0;
		for(int i=0;i<=29;i++)
		{
			//cout<<tab[i]<<" ";
			s+=(tab[i]*(tab[i]-1))/2;
		}
		cout<<s<<"\n";
	}

}
