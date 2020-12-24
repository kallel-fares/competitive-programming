/*
 * Codeforces gym101020J - Good Coins
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101020/problem/J
 * Submission: https://codeforces.com/gym/101020/submission/102265360
 * Solved: 2020-12-24 (PRACTICE)
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
	testc
	{
		ll a,b;
		cin>>a>>b;
		if(__gcd(a,b)==1)
			cout<<"GOOD\n";
		else
			cout<<"NOT GOOD\n";
	}


}
