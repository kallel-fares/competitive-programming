/*
 * Codeforces 1155C - Alarm Clocks Everywhere
 * Rating: 1300 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1155/C
 * Submission: https://codeforces.com/contest/1155/submission/107018319
 * Solved: 2021-02-09 (PRACTICE)
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

	ll n,m,g=0;
	cin>>n>>m;
	pair<ll,ll>ans={0,0};
	vector<ll>vec(n),vec2(m);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		if(vec[0]!=0)
			ans.first=vec[0];
			
			
		vec[i]-=ans.first;
		g=__gcd(g,vec[i]);
		//cout<<g<<" ";
	}
		
		
	for(int i=0;i<m;i++)
	{
		cin>>vec2[i];
		
	}
	
	for(int i=0;i<m;i++)
	{
		if(g%vec2[i]==0)
		{
			ans.second=i+1;
			break;
		}
				
	}
	//cout<<g<<" ";
	
	if(!ans.second)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES\n";
		cout<<ans.first<<" "<<ans.second;
	}
		
	

}
