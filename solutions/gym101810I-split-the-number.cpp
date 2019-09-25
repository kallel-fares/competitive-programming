/*
 * Codeforces gym101810I - Split the Number
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101810/problem/I
 * Submission: https://codeforces.com/gym/101810/submission/61294481
 * Solved: 2019-09-26 (PRACTICE)
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
	int n,i,a,s,j,b,zeros,ones,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(b>a)
		{
			printf("-1\n");
		}
		else
		{
			min=a/b;
			zeros=b;
		
			ones=0;
			while(zeros*min+ones*(min+1)!=a)
			{
				zeros--;
				ones++;
				
				
			}
			for(j=0;j<zeros;j++)
			{
				
				printf("%d ",min);
			}
			for(j=0;j<ones;j++)
			{
				printf("%d ",min+1);
			}
			printf("\n");
		}
	}
}
