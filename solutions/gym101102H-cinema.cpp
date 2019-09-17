/*
 * Codeforces gym101102H - Cinema
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101102/problem/H
 * Submission: https://codeforces.com/gym/101102/submission/60712699
 * Solved: 2019-09-17 (VIRTUAL)
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();
	int a,i,x,k,j,s;
	char ch[10000012];

int main()
{

	
	scanf("%d",&a);
	i=0;
	do
	{
		
		i++;
		s=0;
		scanf("%d %d",&x,&k);
		k++;
		scanf("%s",ch);
		int sz=strlen(ch);
		
		for(j=0;j<sz;j++)
		{
			if(ch[j]=='0')
			{
				s++;
			}
			else 
			{
				s=0;
			}
			if(s==k)
			{
				
				j=sz+2;
			}
			
		}
		if(j==sz)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
		
		
		
		
	}while(i<a);
}
