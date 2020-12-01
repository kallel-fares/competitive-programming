/*
 * Codeforces 1440A - Buy the String
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1440/A
 * Submission: https://codeforces.com/contest/1440/submission/100134917
 * Solved: 2020-12-01 (VIRTUAL)
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
	testc
	{
		string ch;
		int n,c0,c1,h,ans=0,v1=0,v0=0;
		cin>>n>>c0>>c1>>h;
		cin>>ch;
		
		
		
		v1=min(c1,c0+h);
		v0=min(c0,c1+h);
		//cout<<v1<<" "<<v0<<" ";
		
		
		for(int i=0;i<n;i++)
		{
			
			if(ch[i]=='0')
			{
				ans+=v0;		
			}
			else
			{
				ans+=v1;
			}
		}
		cout<<ans<<"\n";
	}


}
