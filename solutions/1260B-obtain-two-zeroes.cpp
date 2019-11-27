/*
 * Codeforces 1260B - Obtain Two Zeroes
 * Rating: 1300 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1260/B
 * Submission: https://codeforces.com/contest/1260/submission/65885662
 * Solved: 2019-11-27 (PRACTICE)
 */

//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();


#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n,a,b;
	for (scanf("%d",&n);n--;)
	{
		scanf("%d%d",&a,&b);
		if((a==0&&b!=0)||(a!=0&&b==0))
		{
			printf("NO");	
		}
		else
		{
			if((a+b)/3!=(float)(a+b)/3)
				printf("NO");
			else 
				if ((a+b)/3>min(a,b))
					printf("NO");
				else
					printf("YES");
			
		}
		printf("\n");
			
	}


}
