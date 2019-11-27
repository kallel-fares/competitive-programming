/*
 * Codeforces 1260A - Heating
 * Rating: 1000 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1260/A
 * Submission: https://codeforces.com/contest/1260/submission/65884967
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
		int c=b/a;
		int d=b%a;
		printf("%d \n",d*(c+1)*(c+1)+(a-d)*c*c);
	}


}
