/*
 * Codeforces gym100989C - 1D Cafeteria (A)
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100989/problem/C
 * Submission: https://codeforces.com/gym/100989/submission/60669592
 * Solved: 2019-09-16 (VIRTUAL)
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
	int a,i,c,s=0,x,t=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&c);
		s+=c;
		scanf("%d",&x);
		t+=x;
		
	}
	printf("%d",t-s);
}
