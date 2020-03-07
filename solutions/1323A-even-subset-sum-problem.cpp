/*
 * Codeforces 1323A - Even Subset Sum Problem
 * Rating: 800 | Tags: brute force, dp, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1323/A
 * Submission: https://codeforces.com/contest/1323/submission/72634871
 * Solved: 2020-03-07 (CONTESTANT)
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
	int t,a,ver=0,n,l,r;
	scanf("%d",&t);
	while(t--)
	{
		ver=n=l=r=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(ver==2)
				continue;
			
			if(a&1)
				if(l==0)
					l=i+1;
				else
					r=i+1;
					
			else
				ver=i+1;	
			
			
		}
		if(ver!=0)
		{
			printf("1\n%d",ver);
		}
		else if(l!=0 && r!=0)
		{
			printf("2\n%d %d",l,r);
		}
		else
		{
			printf("-1");
		}
		printf("\n");
				
	}


}
