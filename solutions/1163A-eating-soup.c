/*
 * Codeforces 1163A - Eating Soup
 * Rating: 900 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1163/A
 * Submission: https://codeforces.com/contest/1163/submission/54067895
 * Solved: 2019-05-13 (PRACTICE)
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
	int n,m;
	scanf("%d %d",&n,&m);
	//s equals max grs
	if(m==0||m==1)
	{
		printf("1");
		return 0;
	}
	if(n/2==m)
	{
		printf("%d",m);
	}
	else if(n/2<m)
		printf("%d",n-m);
	else 
	{
		printf("%d",m);
	
	}
	
}
