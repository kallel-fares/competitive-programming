/*
 * Codeforces 1452B - Toy Blocks
 * Rating: 1400 | Tags: binary search, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1452/B
 * Submission: https://codeforces.com/contest/1452/submission/100905765
 * Solved: 2020-12-11 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		ll n;
		ll tot=0,maxi=0,a,v=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a==maxi)
				v++;
			maxi=max(maxi,a);
			tot+=a;
		}
		
		ll ans=0;
		if(tot%(n-1)!=0)
			ans=(n-1)-tot%(n-1);
		tot+=ans;
		
		if(tot/(n-1)<maxi)
			ans+=(maxi-tot/(n-1))*(n-1);
		
		cout<<ans<<"\n";
		
		
	}


}
