/*
 * Codeforces 1100C - NN and the Optical Illusion
 * Rating: 1200 | Tags: binary search, geometry, math
 * Problem:    https://codeforces.com/problemset/problem/1100/C
 * Submission: https://codeforces.com/contest/1100/submission/97688148
 * Solved: 2020-11-05 (PRACTICE)
 */

 	/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
#define pi 3.14159265358979323846
using namespace std;

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	float a=sin(pi/n);
	printf("%f",(a*x)/(1-a));


}
