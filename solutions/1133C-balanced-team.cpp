/*
 * Codeforces 1133C - Balanced Team
 * Rating: 1200 | Tags: sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1133/C
 * Submission: https://codeforces.com/contest/1133/submission/97654506
 * Solved: 2020-11-04 (PRACTICE)
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
	
		int n,tab[N]={0},ans=0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i];
		
		sort(tab,tab+n);
		for(int i=0;i<n;i++)
		{
			int pos=upper_bound(tab,tab+n,tab[i]+5)-tab;
			//cout<<tab[i]<<" "<<pos<<" ";
			ans=max(ans,pos-i);
		}
	cout<<ans;
	


}
