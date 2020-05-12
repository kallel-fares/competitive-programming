/*
 * Codeforces 1350A - Orac and Factors
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1350/A
 * Submission: https://codeforces.com/contest/1350/submission/79821906
 * Solved: 2020-05-12 (CONTESTANT)
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
		int n,k,ans=0,v=0;
		cin>>n>>k;
		ans=n;
		for(int i=2;i*i<=n;i++)
			if(n%i==0)
			{
				ans+=i;
				v=1;
				break;
			}
		if(v==0)
			ans+=n;
		
				
		cout<<ans+(k-1)*2<<"\n";
		
	}

}
