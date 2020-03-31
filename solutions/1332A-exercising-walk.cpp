/*
 * Codeforces 1332A - Exercising Walk
 * Rating: 1100 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1332/A
 * Submission: https://codeforces.com/contest/1332/submission/75023682
 * Solved: 2020-03-31 (PRACTICE)
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
	int t,a,b,c,d,x,x1,x2,y,y1,y2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
		int iaxe=b-a,jaxe=d-c;
		x+=b-a;
		y+=d-c;
		if(x2<x||x<x1||y<y1||y2<y)
		{
			printf("NO\n");
		}
		else
		{
			if(x2==x1&&(a!=0&&b!=0))
			{
				printf("NO\n");
				continue;
			}
			if(y2==y1&&(c!=0&&d!=0))
			{
				printf("NO\n");
				continue;
			}
			printf("YES\n");
			
		}
	}


}
