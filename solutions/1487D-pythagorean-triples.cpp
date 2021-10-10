/*
 * Codeforces 1487D - Pythagorean Triples
 * Rating: 1500 | Tags: binary search, brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1487/D
 * Submission: https://codeforces.com/contest/1487/submission/131436445
 * Solved: 2021-10-10 (PRACTICE)
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
	
	
	vector<ll> vec(44724);
	int s=0;
	for(int i=3;i<44724;i++)
	{
		if(i&1)
		{
			s++;
		}
		vec[i]=s;
			
	}
	
	
	
	testc
	{
		ll n;
		cin>>n;
		cout<<vec[(ll)sqrt((n*2)-1)]<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
