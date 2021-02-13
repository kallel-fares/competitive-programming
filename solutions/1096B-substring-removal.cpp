/*
 * Codeforces 1096B - Substring Removal
 * Rating: 1300 | Tags: combinatorics, math, strings
 * Problem:    https://codeforces.com/problemset/problem/1096/B
 * Submission: https://codeforces.com/contest/1096/submission/107285561
 * Solved: 2021-02-13 (PRACTICE)
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

	ll n;
	string ch;
	cin>>n;
	cin>>ch;
	
	ll i=0,a=1,a1=1;
	while(ch[i]==ch[i+1])
	{
		a++;
		i++;
	}
	
	i=n-1;
	while(ch[i]==ch[i-1])
	{
		a1++;
		i--;
	}
	
	if(ch[0]==ch[n-1])
	{
		if(a==n)
			cout<<((a*a+a)/2)%998244353;
		else
			cout<<((a+1)*(a1+1))%998244353;
	}
	else
		cout<<a+a1+1;
	


}
