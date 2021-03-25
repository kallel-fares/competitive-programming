/*
 * Codeforces 1506A - Strange Table
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1506/A
 * Submission: https://codeforces.com/contest/1506/submission/111026175
 * Solved: 2021-03-25 (CONTESTANT)
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
		ll n,m,k;
		cin>>n>>m>>k;
		
		ll i=k%n,j=k/n+min((ll)1,k%n);
		if(i==0)
			i=n;
		//cout<<i<<" "<<j;
		cout<<m*(i-1)+j<<"\n";
	
	}


}
