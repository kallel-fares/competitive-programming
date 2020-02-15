/*
 * Codeforces 977A - Wrong Subtraction
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/977/A
 * Submission: https://codeforces.com/contest/977/submission/71106929
 * Solved: 2020-02-15 (PRACTICE)
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

const int N=1e5+5;

int tab[N],tab1[N];


int main ()
{
	int n,m;
	scanf("%d %d",&n,&m);
	while(m--)
	{
		if(n%10==0)
		{
			n=n/10;
		}
		else
			n-=1;
	//	printf("%d\n",n);
	}
	printf("%d",n);
	
	
	
	
}
