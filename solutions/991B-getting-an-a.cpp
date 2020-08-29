/*
 * Codeforces 991B - Getting an A
 * Rating: 900 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/991/B
 * Submission: https://codeforces.com/contest/991/submission/91293062
 * Solved: 2020-08-29 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		int n,tab[101]={0},s=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>tab[i],s+=tab[i];
		
		sort(tab,tab+n);
		
		int i=0;
		//cout<<((float)s)/n-4.5<<"\n";
		while(((float)s)/n<4.5)
		{
			s=s-tab[i]+5;
			i++;
			//cout<<((float)s)/n-4.5<<"\n";
		}
		cout<<i<<"\n";
		
	

}
