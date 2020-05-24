/*
 * Codeforces 1360B - Honest Coach
 * Rating: 800 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1360/B
 * Submission: https://codeforces.com/contest/1360/submission/81227234
 * Solved: 2020-05-24 (CONTESTANT)
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
	int a,b,n;
	testc
	{
		int tab[N]={0},dif=1001;
		
		
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i];
		sort(tab,tab+n);
		for(int i=0;i<n-1;i++)dif=min(dif,abs(tab[i]-tab[i+1]));
		cout<<dif<<"\n";
		
	}
	


}
