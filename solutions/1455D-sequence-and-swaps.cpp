/*
 * Codeforces 1455D - Sequence and Swaps
 * Rating: 1600 | Tags: dp, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1455/D
 * Submission: https://codeforces.com/contest/1455/submission/100027399
 * Solved: 2020-11-30 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=505;
int tab[N];


int isorted(int a,int n)
{
	int v=1;
	for(int i=a;i<n-1;i++)
	{
		if(tab[i]>tab[i+1])
			v=0;
	}
	return v;
}



int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,x,v=0;
		memset(tab,0,sizeof(tab));
		cin>>n>>x;
		for(int i=0;i<n;i++)cin>>tab[i];
		
		//cout<<isorted(0,n)<<" ";
		
		int k=0,i=0;
		
		while(isorted(i,n)==0 && i<n)
		{
			if(tab[i]>x)
			{
				int aux=x;
				x=tab[i];
				tab[i]=aux;
				k++;
			}
			
			i++;
		}	
		
		if(isorted(0,n)==0)
			cout<<"-1\n";
		else
			cout<<k<<"\n";
		
		
		
	}


}
