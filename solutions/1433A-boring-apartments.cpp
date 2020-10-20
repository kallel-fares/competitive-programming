/*
 * Codeforces 1433A - Boring Apartments
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1433/A
 * Submission: https://codeforces.com/contest/1433/submission/96093105
 * Solved: 2020-10-20 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"1\n";
			continue;
		}
		ll ans=0;
		ll aux=(int)ceil(log10(n));
		ans=(n%10-1)*10+((aux+1)*aux)/2;
		cout<<ans<<"\n";
	}

}
