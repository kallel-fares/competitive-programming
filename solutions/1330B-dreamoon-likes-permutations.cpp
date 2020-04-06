/*
 * Codeforces 1330B - Dreamoon Likes Permutations
 * Rating: 1400 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1330/B
 * Submission: https://codeforces.com/contest/1330/submission/75616232
 * Solved: 2020-04-06 (PRACTICE)
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
//int tab[N],ans[500],freq[N],freq2[N];
int main ()
{
	int t;
	int n; 
	scanf("%d",&t);
	while(t--)
	{
		
		int ok=0,mmaxl=0,mmaxr=0;
		ll s=0,s2=0,s3=0;
		
		int tab[N]={0},ans[500]={0},freq[N]={0},freq2[N]={0};
		scanf("%d",&n);
		/*memset(freq,0,(n+1)*sizeof(int));
		memset(freq2,0,(n+1)*sizeof(int));
		memset(tab,0,(n+1)*sizeof(int));
		memset(ans,0,500*sizeof(int));*/
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&tab[i]);
			freq[tab[i]]++;	
			s+=tab[i];
		}
		
		/*for(int i=1;i<=2e5;i++)
		{
			if((freq[i]==0 && freq[i+1]>0)||freq[i]>2)
			{
				ok=1;
				break;
			}
		}*/
		
		for(int i=0;i<n-1;i++)
		{
			freq[tab[i]]--;
			freq2[tab[i]]++;
			s-=tab[i];
			s3+=tab[i];
			if(s3==(((ll)i+1)*((ll)i+2))/2 && s==((n-(ll)i-1)*(n-(ll)i))/2)
			{
				for(int j=1;j<=n;j++)
				{
					if((freq[j]==0 && freq[j+1]>0)||freq[j]>1)
					{
						ok=1;
						break;
					}
					
					if((freq2[j]==0 && freq2[j+1]>0)||freq2[j]>1)
					{
						ok=1;
						break;
					}
				}
				
				ans[s2++]=i+1;
			}	
		}
		
		if(ok)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",s2);
			for(int i=0;i<s2;i++)
			{
				printf("%d %d\n",ans[i],n-ans[i]);
			}
		}
		
		
	}	
}
