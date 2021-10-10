/*
 * Codeforces 1379B - Dubious Cyrpto
 * Rating: 1500 | Tags: binary search, brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1379/B
 * Submission: https://codeforces.com/contest/1379/submission/131476212
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
	testc
	{
		ll l,r,m;
		ll a=0,b=0,c=0;
		cin>>l>>r>>m;
		
		b=l;
		
		c=r;
		
		ll dis=r-l;
		
		for(a=l;a<=r;a++)
		{
			
			
			if(m%a<=dis && m%a!=m)
			{
				b=l+m%a;
				c=l;
				//cout<<"hi";
				break;
			}
			else if(a-m%a<=dis)
			{
				
				//cout<<"lqksdjol";
				c=l+a-m%a;
				break;
			}
		}
			
		cout<<a<<" "<<b<<" "<<c<<"\n";
	}


}
