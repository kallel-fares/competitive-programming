/*
 * Codeforces 1205A - Almost Equal
 * Rating: 1200 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1205/A
 * Submission: https://codeforces.com/contest/1205/submission/60379808
 * Solved: 2019-09-11 (PRACTICE)
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();

int main ()
{
	int a,i,moy,t[500000],signal=0,s=0;
	scanf("%d",&a);
	
	for(i=1;i<=a*2;i++)
	{
		s=s+i;
	}
	if(s%2==0)
	{
		printf("NO");
		return 0;
	}
	else
	{
		printf("YES\n");
		for(i=1;i<=a*2-1;i++)
		{
			if(i%2==1)
			{
				printf("%d ",i);
				i=i+2;
			}
			else
			{
				
				printf("%d ",i);
				
			}
				
			
		}
		printf("2 ");
		for(i=3;i<=a*2;i++)
		{
			if(i%2)
			{
				printf("%d ",i);
				i=i+2;
			}
			else
			{
				
				printf("%d ",i);
				
			}
				
			
		}
	}
	
}
