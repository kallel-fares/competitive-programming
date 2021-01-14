/*
 * Codeforces 1473B - String LCM
 * Rating: 1000 | Tags: brute force, math, number theory, strings
 * Problem:    https://codeforces.com/problemset/problem/1473/B
 * Submission: https://codeforces.com/contest/1473/submission/104311324
 * Solved: 2021-01-14 (CONTESTANT)
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
		string ch1,ch2,maxi,mini;
		cin>>ch1>>ch2;
		
		if(ch1.size()>ch2.size())
		{
			maxi=ch1;
			mini=ch2;
		}
		else
		{
			maxi=ch2;
			mini=ch1;
		}
		
		string ans=maxi;
		for(int i=0;i<mini.size()-1;i++)
		{
			ans+=maxi;
		}
		
		int v=0;
		
		for(int i=0;i<mini.size()*maxi.size();i++)
		{
			if(ans[i]!=mini[i%mini.size()])
			{
				v=1;
			}
		}
		
		if(v)
		{
			cout<<"-1";
		}
		else
		{
			int len=(maxi.size()*mini.size())/__gcd(maxi.size(),mini.size());
			for(int i=0;i<len;i++)
			{
				cout<<ans[i];
			}
			
		}
		cout<<"\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
