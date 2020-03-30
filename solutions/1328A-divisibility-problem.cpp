/*
 * Codeforces 1328A - Divisibility Problem
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1328/A
 * Submission: https://codeforces.com/contest/1328/submission/74816650
 * Solved: 2020-03-30 (VIRTUAL)
 */

//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();

#define pb push_back
#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		int d=a/b;
		if(a%b)
		{
			d++;
		}
		printf("%d\n",b*d-a);
	}


}
