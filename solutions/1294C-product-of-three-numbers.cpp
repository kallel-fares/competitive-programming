/*
 * Codeforces 1294C - Product of Three Numbers
 * Rating: 1300 | Tags: greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1294/C
 * Submission: https://codeforces.com/contest/1294/submission/69466178
 * Solved: 2020-01-24 (PRACTICE)
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

int tab[50000];

int main ()
{
	int t;
	int ll n,a,b,c,maxi;
	scanf("%lld",&t);
	while(t--)
	{
		int s=0;
		int ll i=2,j=2,sq;
		scanf("%lld",&n);
		sq=sqrt(n);
		while(n!=0&&i<=sq)
		{
			if(n%i==0)
			{
			//	printf("%d ",i);
				tab[s]=i;
				s++;
				if(s==2)
					break;
				n/=i;
			}	
			
			i++;
		}
		//printf("%d %d",n,i);
		if(s==2&&n/i>=(i+1))
		{
			printf("YES\n%d %d %d\n",tab[0],tab[1],n/i);
		}
		else
			printf("NO\n");
		
	}
	

}
