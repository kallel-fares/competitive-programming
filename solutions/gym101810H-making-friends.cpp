/*
 * Codeforces gym101810H - Making Friends
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101810/problem/H
 * Submission: https://codeforces.com/gym/101810/submission/61293070
 * Solved: 2019-09-25 (PRACTICE)
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
	int n,i,a,j,t[2002],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=0;j<a*2;j++)
		{
			scanf("%d",&t[j]);
			
		}
		max=t[0]+t[a*2-1];
		for(j=1;j<=a-1;j++)
		{
			if(t[j]+t[a*2-j-1]>max)
			{
				max=t[j]+t[a*2-j-1];
			
			}
		}
		printf("%d \n",max);
	}
	
}
