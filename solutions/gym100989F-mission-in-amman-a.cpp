/*
 * Codeforces gym100989F - Mission in Amman (A)
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100989/problem/F
 * Submission: https://codeforces.com/gym/100989/submission/60671944
 * Solved: 2019-09-16 (VIRTUAL)
 */

#include <bits/stdc++.h>


using namespace std;
//srand(time(NULL));
//nombre_aleatoire = rand();

map <int,int> M;
int t[100009];
int n,m,q,x,y;

int main()
{
	scanf("%d %d %d",&n,&m,&q);
	int s=m;
	for (int i=1; i<=n; i++){
		scanf("%d",&x);
		M[i]=x;
		if (t[x]==0)
		{
			s--;
		}
		t[x]++;
	}
	for (int i=0; i<q; i++){
		scanf("%d %d",&x,&y);
		t[M[x]]--;
		if (t[M[x]]==0)
			s++;
		if (t[y]==0)
			s--;
		t[y]++;
		M[x]=y;
		printf("%d\n",s);
	}
}
