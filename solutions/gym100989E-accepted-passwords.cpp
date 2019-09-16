/*
 * Codeforces gym100989E - Accepted Passwords
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100989/problem/E
 * Submission: https://codeforces.com/gym/100989/submission/60677717
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
	int n,i,s=0;
	char ch[101],c[101];
	scanf("%s",ch);
	scanf("%s",c);
	
	if(strcmp(ch,c)==0)
	{
		printf("yes\n");
	}
	else
	{
		if(strlen(ch)>=8)
		{
			for(i=0;i<strlen(ch);i++)
			{
				if(strlen(ch)==strlen(c))
				{
					if (ch[i]!=c[i])
					s++;
				}
				else if(ch[i]!=c[i-s])				
				{
					s++;
						
				}
				else if(strlen(c)>strlen(ch))
				{
					printf("no\n");
					return 0;
				}
				
				
				
			}
			if(s<=1)
			{
				printf("yes\n");
			}
			else printf("no\n");
		}
		else
		{
			printf("no\n");
		}
	}
	
	
}
