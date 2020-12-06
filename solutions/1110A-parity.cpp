/*
 * Codeforces 1110A - Parity
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1110/A
 * Submission: https://codeforces.com/contest/1110/submission/100519345
 * Solved: 2020-12-06 (PRACTICE)
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
	
	
	int b,k,tab[N]={0},imp=0;
	cin>>b>>k;
	for(int i=0;i<k;i++)
	{
		cin>>tab[i];
		if(tab[i]&1)
			imp++;
	}
	
	
	//cout<<tab[k-1]<<" ";
	
	if(!(b&1))
	{
		if(tab[k-1]&1)
		{
			cout<<"odd";
			return 0;
		}
		else
		{
			cout<<"even";
			return 0;
		}
	}
	
	if(imp&1)
		cout<<"odd";
	else
		cout<<"even";
	

}
