/*
 * Codeforces gym101810C - Flip the Bits
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101810/problem/C
 * Submission: https://codeforces.com/gym/101810/submission/61293521
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
	int n,i,a,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		s=1;
		while(a%2==0)
		{
			a=a/2;
			s++;
		}
		printf("%d\n",s);
	}
}
