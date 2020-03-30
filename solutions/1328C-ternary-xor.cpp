/*
 * Codeforces 1328C - Ternary XOR
 * Rating: 1200 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1328/C
 * Submission: https://codeforces.com/contest/1328/submission/74865762
 * Solved: 2020-03-30 (PRACTICE)
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
int const N=5e4+1;
int tab1[N],tab2[N];
char ch[N];
int main ()
{
	int t,n;
	scanf("%d",&t);
	
	while(t--)
	{
		int status=0;
		scanf("%d",&n);
		scanf("%s",ch);
		for(int i=0;i<n;i++)
		{
			
			
				if(ch[i]=='0')
				{
					tab1[i]=tab2[i]=0;
					continue;
				}
				if(ch[i]=='2')
				{
					if(status==0)
					{
						tab1[i]=tab2[i]=1;
						
					}
					else
					{
						tab1[i]=2;
						tab2[i]=0;
					}
				}
				
				if(ch[i]=='1')
				{
					if(status==0)
					{
						tab2[i]=1;
						tab1[i]=0;
						status=1;				
					}
					else
					{
						tab1[i]=1;
						tab2[i]=0;
					}
						
				}
				
				
			
		}
		for(int i=0;i<n;i++)
			printf("%d",tab1[i]);
		printf("\n");
		for(int i=0;i<n;i++)
			printf("%d",tab2[i]);
		printf("\n");
		
	}
	


}
