/*
 * Codeforces 1294A - Collecting Coins
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1294/A
 * Submission: https://codeforces.com/contest/1294/submission/69326730
 * Solved: 2020-01-22 (CONTESTANT)
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

int tab[100008];

int main ()
{
	int ll n,a,b,t,c,maxi;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld%lld",&a,&b,&c,&n);
		maxi=max(max(a,c),b);
		if((n-3*maxi+a+b+c)>=0&&(n-3*maxi+a+b+c)%3==0)
			printf("YES\n");
		else
			printf("NO\n");
		//printf("\n%d\n",n-3*maxi-a-b-c);
	}
	

}
