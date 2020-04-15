/*
 * Codeforces 1337B - Kana and Dragon Quest game
 * Rating: 900 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1337/B
 * Submission: https://codeforces.com/contest/1337/submission/76852249
 * Solved: 2020-04-15 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;scanf("%d",&t);while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	testc
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		while(b-- && a>20)
		{
			a=a/2+10;
		}
		if(a-c*10<=0)
			printf("YES\n");
		else
			printf("NO\n");
		
		
	}


}
