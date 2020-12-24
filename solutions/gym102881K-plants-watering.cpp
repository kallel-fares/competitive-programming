/*
 * Codeforces gym102881K - Plants Watering
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102881/problem/K
 * Submission: https://codeforces.com/gym/102881/submission/102190960
 * Solved: 2020-12-24 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("plants.in","r",stdin);
	
	int n,tab1[N],tab[N],v=0;
	
	cin>>n;
	memset(tab,0,4*(n+1));
	memset(tab1,0,4*(n+1));
	
	for(int i=0;i<n;i++)
		cin>>tab[i];
	for(int i=0;i<n;i++)
		cin>>tab1[i];
	
	
	ll lowb=1000000000,highb=0;
	
	for(int i=0;i<n-1;i++)
	{
		if(tab[i]<=tab[i+1])
		{
			if(tab1[i]>tab1[i+1])
			{
				lowb=min(lowb,(ll)((tab[i+1]-tab[i])/(tab1[i]-tab1[i+1])+1));
			}
		}
		else
		{
			if(tab1[i]<tab1[i+1])
			{
				highb=max(highb,(ll)((tab[i]-tab[i+1])/(tab1[i+1]-tab1[i])+min((tab[i]-tab[i+1])%(tab1[i+1]-tab1[i]),1)));
			}
			else
				v=1;
		}
	}
	
	if(v)
		cout<<"-1\n";
	else
	{
		if(highb>lowb)
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<highb<<"\n";
		}
	}
	
				
	


}
