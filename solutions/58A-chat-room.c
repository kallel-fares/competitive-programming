/*
 * Codeforces 58A - Chat room
 * Rating: 1000 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/58/A
 * Submission: https://codeforces.com/contest/58/submission/53203457
 * Solved: 2019-04-23 (PRACTICE)
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
	char hello[6]="hello",ch[100];
	int verif=0,i,j,t[6],k=0;
	gets(ch);
	
	for(i=0;i<=4;i++)
	{
		for(j=k;j<strlen(ch);j++)
		{
			if(ch[j]==hello[i])
			{
				verif++;
			//	t[i]=j;
				k=j+1;
				break;
			}
			
	
		
		}
	
		if(verif==5)
		{
			/*for(j=0;j<=3;j++)
			{
				printf("%d\n",t[j+1]);
				if(t[j]>t[j+1])
				{
					
					printf("NO\n");
					return 0;
				}
			}*/
			printf("YES\n");
			return 0;
		}	
	}
	
	
		printf("NO\n");	
	
	
		
	
	
	
	
}
