/*
 * Codeforces 1311C - Perform the Combo
 * Rating: 1300 | Tags: brute force
 * Problem:    https://codeforces.com/problemset/problem/1311/C
 * Submission: https://codeforces.com/contest/1311/submission/71914878
 * Solved: 2020-02-26 (PRACTICE)
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
const int N=2e5+2;

char ch[N];
int main ()
{
	int t,n,m,a;
	//printf("%d",'a'-'a');
	scanf("%d",&t);
	while(t--)
	{
		int tab [N]={0};
		int res[27]={0};
		scanf("%d %d",&n,&m);
		scanf("%s",ch);
		for(int i=0;i<m;i++)scanf("%d",&a),tab[a]++;
		int s=m+1;
		for(int i=0;i<n;i++)
		{
			res[ch[i]-'a']+=s;
			//printf(" < %d | %d >",res['c'-'a'],s);
			if(tab[i+1]!=0)
			{
				s-=tab[i+1];
				tab[i+1]=0;
			}
		}
		
		for(int i=0;i<26;i++)
		{
			printf("%d ",res[i]);
		}
		printf("\n");
	}


}
