/*
 * Codeforces 1076C - Meme Problem
 * Rating: 1300 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1076/C
 * Submission: https://codeforces.com/contest/1076/submission/107723475
 * Solved: 2021-02-17 (PRACTICE)
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
	cout << setprecision(10) << fixed;
	//freopen("","r",stdin);
	testc
	{
		double d;
		cin>>d;
		
		if(d*d-4*d<0)
		{
			cout<<"N\n";
		}
		else
		{
			cout<<"Y "<<d-(d-sqrt(d*d-4*d))/2<<" "<<(d-sqrt(d*d-4*d))/2<<"\n";
		}
	}


}
