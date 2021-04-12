/*
 * Codeforces 1511B - GCD Length
 * Rating: 1100 | Tags: constructive algorithms, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1511/B
 * Submission: https://codeforces.com/contest/1511/submission/112809873
 * Solved: 2021-04-12 (CONTESTANT)
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


int len(ll a)
{
	int v=0;
	while(a)
	{
		a/=10;
		v++;
	}
	return v;
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	
	
	
	testc
	{
		ll a,b,c;
		cin>>a>>b>>c;
		
		ll ans1=1,ans2=1,aux=1;
		
		while((int)log10(aux)+1<c)
		{
			aux*=2;
		}
		ans1=ans2=aux;
		while((int)log10(ans1)+1<a)
		{
			ans1*=3;
		}
		
		while((int)log10(ans2)+1<b)
		{
			ans2*=5;
		}
		
		//cout<<aux<<"\n";
		cout<<ans1<<" "<<ans2<<"\n";
	}


}
