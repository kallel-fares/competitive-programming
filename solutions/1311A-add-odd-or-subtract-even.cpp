/*
 * Codeforces 1311A - Add Odd or Subtract Even
 * Rating: 800 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1311/A
 * Submission: https://codeforces.com/contest/1311/submission/71812422
 * Solved: 2020-02-24 (PRACTICE)
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
	int n=0,a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		//printf("aaaaa%d kkk",(a-b)&2);
		if((a-b>0 && (a-b)&1) || (a-b<0 && (a-b)%2==0))
		{
			printf("2\n");
		}
		if((a-b>0 && (a-b)%2==0) || (a-b<0 && (a-b)&1))
		{
			printf("1\n");
		}
		if(a==b)
		{
			printf("0\n");
		}
		
	}


}
