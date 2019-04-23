/*
 * Codeforces 405A - Gravity Flip
 * Rating: 900 | Tags: greedy, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/405/A
 * Submission: https://codeforces.com/contest/405/submission/53201470
 * Solved: 2019-04-23 (PRACTICE)
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
	int a,i,t[100],aux;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&t[i]);
	}
	
	for(i=0;i<a-1;i++)
	{
		if(t[i]>t[i+1])
		{
			aux=t[i];
			t[i]=t[i+1];
			t[i+1]=aux;
			i=-1;
		}
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",t[i]);
	}
}
