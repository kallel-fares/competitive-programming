/*
 * Codeforces gym101102E - Ya Rajaie and Books
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101102/problem/E
 * Submission: https://codeforces.com/gym/101102/submission/60711852
 * Solved: 2019-09-17 (VIRTUAL)
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
	int a,i,x;
	scanf("%d",&a);
	i=0;
	do
	{
		i++;
		scanf("%d",&x);
		if(x%5==0)
			printf("%d \n",x/5);
		else
			printf("%d \n",x/5+1);
		
	}while(i<a);
}
