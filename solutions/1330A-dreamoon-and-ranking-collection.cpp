/*
 * Codeforces 1330A - Dreamoon and Ranking Collection
 * Rating: 900 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1330/A
 * Submission: https://codeforces.com/contest/1330/submission/75600793
 * Solved: 2020-04-05 (VIRTUAL)
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
	int t,n,x,a;
	scanf("%d",&t);
	while(t--)
	{
		int tab[102]={0};
		int s=0;
		scanf("%d %d",&n,&x);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a),tab[a]=1;
		}
		for(int i=1;i<=100;i++)
		{
			if(tab[i]==1)
			{
				s++;
			}
			else
			{
				if(x==0)
				{
					break;
				}
				else
				{
					x--;
					s++;
				}
			}
		}
		printf("%d\n",s+x);
	}


}
