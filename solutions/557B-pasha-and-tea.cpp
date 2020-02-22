/*
 * Codeforces 557B - Pasha and Tea
 * Rating: 1500 | Tags: constructive algorithms, implementation, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/557/B
 * Submission: https://codeforces.com/contest/557/submission/71637173
 * Solved: 2020-02-23 (PRACTICE)
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

int tab[N];
int main ()
{
	int n,w;
	scanf("%d %d",&n,&w);
	for(int i=0;i<n*2;i++)scanf("%d",&tab[i]);
	sort(tab,tab+n*2);
	
	float mini=min((float)min((float)tab[0],(float)tab[n]/2),(float)w/(3*n));
	//printf("%f",mini);
	
	printf("%f",3*mini*n);
}
