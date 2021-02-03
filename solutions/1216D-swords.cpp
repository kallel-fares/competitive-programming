/*
 * Codeforces 1216D - Swords
 * Rating: 1300 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1216/D
 * Submission: https://codeforces.com/contest/1216/submission/106392307
 * Solved: 2021-02-03 (PRACTICE)
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
	ll n,ans=0;
	cin>>n;
	vector<int> vec(n);
	
	int g=0,maxi=0;
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		maxi=max(maxi,vec[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		vec[i]=maxi-vec[i];
		g=__gcd(vec[i],g);
		
	}
	
	for(int i=0;i<n;i++)
	{
		ans+=vec[i]/g;
	}
	
	
	cout<<ans<<" "<<g<<"\n";
	

}
