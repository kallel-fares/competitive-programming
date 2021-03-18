/*
 * Codeforces 1499A - Domino on Windowsill
 * Rating: 800 | Tags: combinatorics, constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1499/A
 * Submission: https://codeforces.com/contest/1499/submission/110333448
 * Solved: 2021-03-18 (CONTESTANT)
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
		int n,w,b,k1,k2;
		cin>>n>>k1>>k2;
		cin>>w>>b;
		
		if(min(k1,k2)+(max(k1,k2)-min(k1,k2))/2>=w && min(n-k1,n-k2)+(max(n-k1,n-k2)-min(n-k1,n-k2))/2>=b)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	
	}


}
