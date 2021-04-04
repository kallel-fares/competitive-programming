/*
 * Codeforces 1354C1 - Simple Polygon Embedding
 * Rating: 1400 | Tags: binary search, geometry, math, ternary search
 * Problem:    https://codeforces.com/problemset/problem/1354/C1
 * Submission: https://codeforces.com/contest/1354/submission/112035082
 * Solved: 2021-04-04 (PRACTICE)
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
		double n;
		cin>>n;
		
		cout<<fixed<<setprecision(10);
		//cout<<tan()<<"\n";
		cout<<1/tan((atan(1)*4)/(2*n))<<"\n";
	
	}


}
