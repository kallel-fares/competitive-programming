/*
 * Codeforces 1149A - Prefix Sum Primes
 * Rating: 1200 | Tags: constructive algorithms, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1149/A
 * Submission: https://codeforces.com/contest/1149/submission/97642324
 * Solved: 2020-11-04 (PRACTICE)
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
	
	int n,a,one=0,two=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a==1)
			one++;
		else
			two++;
	}
		
	if(!one || !two)
	{
		for(int i=0;i<n;i++) cout<<a<<" ";
		return 0;
	}	
	
	/*if(two==1)
	{
		cout<<"2 ";
		while(one--)
			cout<<"1 ";
		return 0;
	}
	
	if(one==1)
	{
		two--;
		cout<<"2 1 ";
		while(two--)
			cout<<"2 ";
		return 0;
	}*/
	
	two--;
	one--;
	cout<<"2 1 ";
	while(two--)
		cout<<"2 ";
	while(one--)
		cout<<"1 ";
	
	

}
