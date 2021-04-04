/*
 * Codeforces 1354C2 - Not So Simple Polygon Embedding
 * Rating: 2000 | Tags: binary search, brute force, geometry, math
 * Problem:    https://codeforces.com/problemset/problem/1354/C2
 * Submission: https://codeforces.com/contest/1354/submission/112035825
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
		//cout<<sin((atan(1)*4)/6)<<"\n";
		cout<<1/(sin((atan(1)*4)/(4*n))*2)<<"\n";
	
	}


}
