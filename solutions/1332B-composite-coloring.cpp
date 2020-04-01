/*
 * Codeforces 1332B - Composite Coloring
 * Rating: 1400 | Tags: brute force, constructive algorithms, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1332/B
 * Submission: https://codeforces.com/contest/1332/submission/75027989
 * Solved: 2020-04-01 (PRACTICE)
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
/*int gcd(int a, int b)
{
	if(a==b)
		return a;
	if(a>b)
		gcd(a-b,b);
	else
		gcd(a,b-a);
}*/

const int N=1e3+1;
int prime[12]={2,3,5,7,11,13,17,19,23,29,31};
int main ()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int tab[N][2]={0};
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&tab[i][0]);
		}
		int ans=1,realans=0;
		for(int i=0;i<11;i++)
		{
			for(int j=0;j<n;j++)
			{	
				if(tab[j][0]%prime[i]==0&&tab[j][1]==0)
				{
					tab[j][1]=ans;
					realans=1;
					
				}
						
			}
			if(realans)
			{
				ans++;
				realans=0;	
			}
				
		}
		printf("%d\n",ans-1);
		for(int i=0;i<n;i++)
		{
			printf("%d ",tab[i][1]);
		}
		printf("\n");
	}


}
