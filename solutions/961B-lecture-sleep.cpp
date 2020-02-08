/*
 * Codeforces 961B - Lecture Sleep
 * Rating: 1200 | Tags: data structures, dp, implementation, two pointers
 * Problem:    https://codeforces.com/problemset/problem/961/B
 * Submission: https://codeforces.com/contest/961/submission/70571756
 * Solved: 2020-02-08 (PRACTICE)
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
int tab[N][2];
int main ()
{
	ll n,k,s=0,maxi=0,v=0;
	scanf("%lld%lld",&n,&k);
	for(int i=0;i<n;i++)scanf("%d",&tab[i][0]);
	for(int i=0;i<n;i++)scanf("%d",&tab[i][1]),s+=tab[i][1]?tab[i][0]:0;
	
	for(int i=0;i<k;i++)
	{
		if(tab[i][1]==0)
		{
			s+=tab[i][0];
		}			
	}
	maxi=s;
	for(int i=1;i<n-k+1;i++)
	{
		if(tab[i+k-1][1]==0)
		{
			s+=tab[i+k-1][0];
		}
		if(tab[i-1][1]==0)
		{
			s-=tab[i-1][0];
		}
		maxi=max(s,maxi);
	}
	printf("%lld",maxi);


}
