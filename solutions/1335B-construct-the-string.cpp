/*
 * Codeforces 1335B - Construct the String
 * Rating: 900 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1335/B
 * Submission: https://codeforces.com/contest/1335/submission/76528712
 * Solved: 2020-04-13 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;scanf("%d",&t);while(t--)


#include <bits/stdc++.h>
using namespace std;
const int N=2e3+5;
char ch[N];
int main ()
{
	int n,a,b;
	testc
	{
		scanf("%d %d %d",&n,&a,&b);
		
		for(int i=0;i<a;i++)
		{	
			b--;
			ch[i]='a'+max(b,0);
				
			
		}
		for(int i=0;i<n;i++)
		{
			printf("%c",ch[i%a]);	
		}
		
		printf("\n");
	}	
		
}
