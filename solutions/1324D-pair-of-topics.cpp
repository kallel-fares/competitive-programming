/*
 * Codeforces 1324D - Pair of Topics
 * Rating: 1400 | Tags: binary search, data structures, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1324/D
 * Submission: https://codeforces.com/contest/1324/submission/79204498
 * Solved: 2020-05-06 (PRACTICE)
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
	ll tab[N];
	ll s=0,n,a;
	cin>>n;
	for(int i=0;i<n;i++)cin>>tab[i];
	for(int i=0;i<n;i++)cin>>a,tab[i]-=a;
	
	sort(tab,tab+n);
//	for(int i=0;i<n;i++)cout<<tab[i];
	int i;
	for(i=0;i<n;i++)
	{
		if(tab[i]<=0)
		{
			auto low=lower_bound(tab+i,tab+n,abs(tab[i])+1)-tab;
			//cout<<low<<"\n";
			s+=n-low;
		}
		else
		{
			break;
		}
	}
	s+=(n-i-1)*(n-i)/2;
	cout<<s;
}
