/*
 * Codeforces 630B - Moore's Law
 * Rating: 1200 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/630/B
 * Submission: https://codeforces.com/contest/630/submission/100713501
 * Solved: 2020-12-08 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

//const int N=3e5+5;

double powernskill(double a,ll p)
{
	if(p==0)
		return 1;
	if(p==1)
		return a;
	
	double aux=powernskill(a,p/2);
	if(p&1)
		return aux*aux*a;
	else
		return aux*aux;
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double a;
	ll b;
	cin>>a>>b;
	printf("%f",a*powernskill(1.000000011,b));

}
