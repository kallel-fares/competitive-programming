/*
 * Codeforces 1328B - K-th Beautiful String
 * Rating: 1300 | Tags: binary search, brute force, combinatorics, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1328/B
 * Submission: https://codeforces.com/contest/1328/submission/74928140
 * Solved: 2020-03-31 (PRACTICE)
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

int main ()
{
	long long int t,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		long long int i;
		i=round(sqrt(b*2));
		//printf("%lld",i);
		int j=abs(i-i*(i+1)/2+b-1);
		//printf("%d %d",i,j);
		//printf("%d %d",i,j);
		i=a-i-1;
		j=a-j-1;
		//printf("%d %d",i,j);
		for(int k=0;k<a;k++)
		{
			if(k==i||k==j)
				printf("b");
			else
				printf("a");
		}
		
		printf("\n");
	}


}
