/*
 * Codeforces 978C - Letters
 * Rating: 1000 | Tags: binary search, implementation, two pointers
 * Problem:    https://codeforces.com/problemset/problem/978/C
 * Submission: https://codeforces.com/contest/978/submission/70664073
 * Solved: 2020-02-09 (PRACTICE)
 */

 
#define pb push_back
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
const int N=2e5+2;
 
 
ll tab[N];
	
int main ()
{
	int n,m;
	scanf("%d%d",&n,&m);
	ll a=0;
	for(int i=0;i<n;i++)scanf("%lld",&tab[i]),tab[i]+=a,a=tab[i];
	ll con=0;
	int last=0;
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&a);
		for(int j=last;j<n;j++)
		{
			if(a<=tab[j])
			{
				printf("%d %lld\n",j+1,abs(con-a));
			//	printf("%lld %lld",tab[j])
				last=j;
				break;
			}
			con=tab[j];
			
		}
	}
}
