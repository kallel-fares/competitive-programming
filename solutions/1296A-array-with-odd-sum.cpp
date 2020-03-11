/*
 * Codeforces 1296A - Array with Odd Sum
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1296/A
 * Submission: https://codeforces.com/contest/1296/submission/72970791
 * Solved: 2020-03-11 (VIRTUAL)
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
	int t,n,imp,a,p;
	scanf("%d",&t);
	while(t--)
	{
		imp=p=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a&1)
				imp++;
			else
				p++;
		}
		if(imp!=0)
		{
			if(imp!=n)
			{
				printf("YES\n");
				continue;	
			}
			else
			{
				if(n&1)
				{
					printf("YES\n");
					continue;
				}
			}
		}
		printf("NO\n");
		
		
	}
	
	
	


}
