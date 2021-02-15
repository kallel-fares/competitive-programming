/*
 * Codeforces 1487B - Cat Cycle
 * Rating: 1200 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1487/B
 * Submission: https://codeforces.com/contest/1487/submission/107431253
 * Solved: 2021-02-15 (CONTESTANT)
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
		ll n,k;
		cin>>n>>k;
		k--;
		if(n&1)
		{
			ll aux=n/2;
			k+=k/aux;
			
			cout<<1+k%n<<"\n";
		}
		else
		{
			cout<<1+k%n<<"\n";
		}
	}


}
