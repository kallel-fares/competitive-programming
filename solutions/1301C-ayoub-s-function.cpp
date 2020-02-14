/*
 * Codeforces 1301C - Ayoub's function
 * Rating: 1700 | Tags: binary search, combinatorics, greedy, math, strings
 * Problem:    https://codeforces.com/problemset/problem/1301/C
 * Submission: https://codeforces.com/contest/1301/submission/71058771
 * Solved: 2020-02-14 (PRACTICE)
 */

//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();

#define pb push_back
#define ll long long

#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;


int tab[N],tab1[N];
	
int main ()
{
	ll t,m,d,r,s;
	ll n;
	
	
	scanf("%lld",&t);
	while(t--)
	{
		ll total=0;
		scanf("%lld %lld",&n,&m);
		total=n*(n+1)/2;
		
		d=(n-m)/(m+1);
		r=(n-m)%(m+1);
		//printf("%lld %d %d\n",total,d,r);
	/*	if(m==0)
			printf("0\n");
		else*/
		printf("%lld\n",total-(d*(d+1)/2)*(m+1)-(d+1)*r);
		
	}
		
	
}
