/*
 * Codeforces 1480B - The Great Hero
 * Rating: 900 | Tags: greedy, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1480/B
 * Submission: https://codeforces.com/contest/1480/submission/106770828
 * Solved: 2021-02-07 (CONTESTANT)
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
		ll a,b,n,sa=0,sh=0,maxi=0;
		cin>>a>>b>>n;
		vector<ll> att(n),hea(n);
		
		for(int i=0;i<n;i++)
		{
			cin>>att[i];
			maxi=max(maxi,att[i]);
			
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>hea[i];
			//sh+=hea;
		}
		
		ll dmg_taken=0;
		for(int i=0;i<n;i++)
		{
			dmg_taken+=(hea[i]/a+min(hea[i]%a,(ll)1))*att[i];
		}
		
		if(dmg_taken-maxi<b)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
