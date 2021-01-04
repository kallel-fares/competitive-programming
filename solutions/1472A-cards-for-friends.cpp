/*
 * Codeforces 1472A - Cards for Friends
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1472/A
 * Submission: https://codeforces.com/contest/1472/submission/103266487
 * Solved: 2021-01-04 (CONTESTANT)
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
		ll a,b,n,ans=0;
		
		
		cin>>a>>b>>n;
		
		
		int i=2,v=1;
		
		while(i<=a)
		{
			if(a%i==0)
				v=i;
			i<<=1;
		}
		ans+=v;
		
		
		v=1,i=2;
		while(i<=b)
		{
			if(b%i==0)
				v=i;
			i<<=1;
		}
		
		//cout<<v<<"\n";
		ans*=v;
		
		//cout<<ans<<"\n";
		if(ans>=n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
