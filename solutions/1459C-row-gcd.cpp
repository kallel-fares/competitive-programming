/*
 * Codeforces 1459C - Row GCD
 * Rating: 1600 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1459/C
 * Submission: https://codeforces.com/contest/1459/submission/101848280
 * Solved: 2020-12-20 (PRACTICE)
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
	
	int n,m;
	ll tab[N]={0},mini=0;
	vector <ll> vect;
	cin>>n>>m;
	
	cin>>tab[0];
	mini=tab[0];
	for(int i=1;i<n;i++)
	{
		cin>>tab[i];
		mini=min(mini,tab[i]);
		vect.pb(abs(tab[i-1]-tab[i]));
		//cout<<abs(tab[i-1]-tab[i])<<" ";
	}
	ll gc=1;
	if(n!=1)
		gc=vect[0];
	
	for(auto x:vect)
	{
		gc=__gcd(x,gc);
	}
	
	
	ll a;
	for(int i=0;i<m;i++)
	{
		cin>>a;
		if(n==1)
			cout<<tab[0]+a<<" ";
		else
			cout<<__gcd(gc,mini+a)<<" ";
		
	}
	
	//cout<<gc;


}
