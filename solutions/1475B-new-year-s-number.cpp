/*
 * Codeforces 1475B - New Year's Number
 * Rating: 900 | Tags: brute force, dp, math
 * Problem:    https://codeforces.com/problemset/problem/1475/B
 * Submission: https://codeforces.com/contest/1475/submission/106125525
 * Solved: 2021-01-31 (VIRTUAL)
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
		
		ll a;
		cin>>a;
		int k=0,v=0;
		while(2020*k<=a)
		{
			if((a-2020*k)%2021==0)
			{
				v=1;
				break;
			}
			k++;
		}
		
		if(v)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
