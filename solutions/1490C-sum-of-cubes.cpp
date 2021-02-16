/*
 * Codeforces 1490C - Sum of Cubes
 * Rating: 1100 | Tags: binary search, brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1490/C
 * Submission: https://codeforces.com/contest/1490/submission/107641684
 * Solved: 2021-02-16 (PRACTICE)
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
		ll n;
		cin>>n;
	
		int v=0;
		ll bob=cbrt(n);
		//cout<<bob;
		for(ll i=1;i<=bob;i++)
		{
			if(n-i*i*i==0)
				continue;
			long double aux=cbrt(n-i*i*i);
		
			//cout<<aux-(ll)aux<<" "<<i<<"\n";
			if(abs(aux-(ll)aux)<1e-9)
			{
				v=1;
				break;
			}
		}
		
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}


}
