/*
 * Codeforces 1474B - Different Divisors
 * Rating: 1000 | Tags: binary search, constructive algorithms, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1474/B
 * Submission: https://codeforces.com/contest/1474/submission/105145648
 * Solved: 2021-01-23 (PRACTICE)
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
	vector<int> primes(N);
	
	for(int i=2;i<N-4;i++)
	{
		if(!primes[i])
		{
			int v=2;
			while(i*v<N-3)
			{
				primes[i*v]=1;
				v++;
			}
			
		}
	}
	

	
	testc
	{
		int a;
		cin>>a;
		ll ans1=0,ans2=0;
		for(int i=a+1;i<N-1;i++)
		{
			if(!primes[i])
			{
				ans1=i;
				break;
			}
		}
		
		for(int i=ans1+a;i<N-1;i++)
		{
			if(!primes[i])
			{
				ans2=i;
				break;
			}
		}
		cout<<ans1*ans2<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
