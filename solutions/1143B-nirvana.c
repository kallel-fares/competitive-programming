/*
 * Codeforces 1143B - Nirvana
 * Rating: 1200 | Tags: brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1143/B
 * Submission: https://codeforces.com/contest/1143/submission/53379913
 * Solved: 2019-04-26 (PRACTICE)
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();

typedef struct cel
{
	int number;
	int value;
}cell;

int main ()
{
	int a,j=1,i=10,s=1,aux,max;
	cell t[12];
	scanf("%d",&a);
	if(a>=1000000000)
	{
		printf("387420489");
		
	}
	else
	{
		t[0].number=a;
		aux=a;
		while(aux>=1)
		{
			s=s*(aux%10);
			aux=aux/10;
		}
		t[0].value=s;
		while(a/i!=0)
		{
		
			s=1;
			aux=a;
			aux=aux-(aux%i+1);
			t[j].number=aux;
			
			
			while(aux>=1)
			{
				s=s*(aux%10);
				aux=aux/10;
			}
			t[j].value=s;
			j++;
			i=i*10;
		}
	
		max=t[0].value;
		
		for(i=0;i<j;i++)
		{
			if(t[i].value>max)
			{
				max=t[i].value;
				
			}
			
		}
		
		printf("%d",max);
	}
	
	
}
