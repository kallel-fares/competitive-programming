/*
 * Codeforces 1207B - Square Filling
 * Rating: 1200 | Tags: constructive algorithms, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1207/B
 * Submission: https://codeforces.com/contest/1207/submission/59678900
 * Solved: 2019-08-29 (PRACTICE)
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
	
	int B[50][50],n,m,i,j,k=0,op[50][50],K[2500][2];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(B[i][j]==1)
			{
				
			
				if(B[i][j]==B[i+1][j]&&B[i][j]==B[i][j+1]&&B[i][j]==B[i+1][j+1])
				{
					
					K[k][0]=i;
					K[k][1]=j;
					k++;
					
					op[i][j]=op[i+1][j]=op[i][j+1]=op[i+1][j+1]=1;
				}
			
				
			}
			
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
				if(B[i][j]!=op[i][j])
				{
					printf("-1");
					return 0;
				}	
		}
	}
	if(k==0)
	{
		printf("0");
		return 0;	
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d %d\n",K[i][0]+1,K[i][1]+1);
	}
	

}
