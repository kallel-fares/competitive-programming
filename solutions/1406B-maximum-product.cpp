/*
 * Codeforces 1406B - Maximum Product
 * Rating: 1200 | Tags: brute force, dp, greedy, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1406/B
 * Submission: https://codeforces.com/contest/1406/submission/93786771
 * Solved: 2020-09-25 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

ll tab[N];
ll rec(int start,int n,int v)
{
	
	if(v==5)
		return max(tab[start]*rec(start+1,n,v-1),tab[n-1]*rec(start,n-1,v-1));
	if(v==0)
		return 1;
		
	return max(tab[start]*tab[start+1]*rec(start+2,n,v-2),tab[n-1]*tab[n-2]*rec(start,n-2,v-2));
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		memset(tab, 0, N*sizeof(ll));
		int n,neg=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			if(tab[i]<0)
				neg++;
		}
		sort(tab,tab+n);
		ll ans=1;
		if(neg==n)
		{
			for(int i=n-1;i>=n-5;i--)
			{
				ans*=tab[i];
			}
			cout<<ans<<"\n";
			continue;
		}
		cout<<rec(0,n,5)<<"\n";
		
		
	}


}
