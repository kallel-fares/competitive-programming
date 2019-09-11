/*
 * Codeforces 1189C - Candies!
 * Rating: 1400 | Tags: data structures, dp, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1189/C
 * Submission: https://codeforces.com/contest/1189/submission/60383348
 * Solved: 2019-09-11 (PRACTICE)
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();

int main()
{
	int a,i,q,x,y,t[100000],l,s=1;
	scanf("%d",&a);
	scanf("%d",&t[0]);
	for(i=1;i<a;i++)
	{
		scanf("%d",&l);
		
		t[i]=t[i-1]+l;
		
	}

	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&x);
		scanf("%d",&y);
		if(x<=1)
		{
			printf("%d \n",t[y-1]/10);
		}
		else
		{
			
			printf("%d \n",(t[y-1]-t[x-2])/10);
			
		}

	}
	
	
}
