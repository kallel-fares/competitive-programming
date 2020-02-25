/*
 * Codeforces 1311B - WeirdSort
 * Rating: 1200 | Tags: dfs and similar, sortings
 * Problem:    https://codeforces.com/problemset/problem/1311/B
 * Submission: https://codeforces.com/contest/1311/submission/71828953
 * Solved: 2020-02-25 (PRACTICE)
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
const int N=500;

int main ()
{
	int t,n,m,a;
	scanf("%d",&t);
	while(t--)
	{
		int tab[N]={0},srted[N]={0},pos[N]={0};
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)scanf("%d",&tab[i]),srted[i]=tab[i];
		//sort(srted,srted+n);
		for(int i=0;i<m;i++)scanf("%d",&a),pos[a]++;
		//	for(int i=0;i<101;i++)printf("%d ",pos[i]);
		for(int i=0;i<n-1;i++)
		{
			//for(int j=0;j<n;j++)printf("%d ",tab[j]);
			if(tab[i]>tab[i+1])
			{
				if(pos[i+1]==0)
				{
					a=-5;
					break;
				}
				else
				{
					int aux=tab[i];
					tab[i]=tab[i+1];
					tab[i+1]=aux;
					i=-1;
				}
			}
		}

		
		if(a==-5)	
			printf("NO\n");
		else
			printf("YES\n");
			
	}


}
