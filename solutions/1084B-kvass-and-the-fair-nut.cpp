/*
 * Codeforces 1084B - Kvass and the Fair Nut
 * Rating: 1200 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1084/B
 * Submission: https://codeforces.com/contest/1084/submission/97722977
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

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		ll n,s=0,a,sum=0,mini=1000000000;
		cin>>n>>s;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
			mini=min(mini,a);
		}
		
		if(sum<s)
		{
			cout<<"-1";
		}
		else
		{
			cout<<min(mini,(sum-s)/n);
		}
	
}
