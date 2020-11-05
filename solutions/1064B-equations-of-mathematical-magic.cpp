/*
 * Codeforces 1064B - Equations of Mathematical Magic
 * Rating: 1200 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1064/B
 * Submission: https://codeforces.com/contest/1064/submission/97742358
 * Solved: 2020-11-06 (PRACTICE)
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
		ll n,ans=0;
		cin>>n;
		ll j=1;
		while(j<=n)
		{
			if((n^j)<n)
			{
				
			//	cout<<j<<" "<<" ";		
				ans++;	
			}
			j<<=1;
		}
		cout<<(1<<ans)<<"\n";
	
	}


}
