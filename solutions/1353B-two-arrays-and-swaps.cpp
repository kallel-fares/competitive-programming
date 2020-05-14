/*
 * Codeforces 1353B - Two Arrays And Swaps
 * Rating: 800 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1353/B
 * Submission: https://codeforces.com/contest/1353/submission/80115303
 * Solved: 2020-05-14 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=35;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,k,tab[N]={0},s=0,tab2[N]={0};
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>tab[i],s+=tab[i];
		for(int i=0;i<n;i++)cin>>tab2[i];
		sort(tab,tab+n);
		sort(tab2,tab2+n);
		
		
		int i=0;
		//cout<<s<<"\n";
		while(tab[i]<tab2[n-i-1] && i<k)
		{
			//cout<<tab[i]<<" "<<tab2[n-1-i];
			
			s+=tab2[n-i-1]-tab[i];
			i++;
		}
		cout<<s<<"\n";
	}

}
