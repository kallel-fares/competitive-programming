/*
 * Codeforces 1498A - GCD Sum
 * Rating: 800 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1498/A
 * Submission: https://codeforces.com/contest/1498/submission/111360410
 * Solved: 2021-03-29 (CONTESTANT)
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
ll solve(ll n)
{
	ll aux=0;
	while(n)
	{
		aux+=n%10;
		n/=10;
	}
	return aux;		
		
}
	

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	
	
	testc
	{
		
		ll n;
		cin>>n;
		ll i=n;
		while(true)
		{
			if(__gcd(i,solve(i))>1)
			{
				break;
			}
			i++;
		}
		
		cout<<i<<"\n";
	
	}


}
