/*
 * Codeforces 735B - Urbanization
 * Rating: 1100 | Tags: greedy, number theory, sortings
 * Problem:    https://codeforces.com/problemset/problem/735/B
 * Submission: https://codeforces.com/contest/735/submission/96006918
 * Solved: 2020-10-19 (PRACTICE)
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
	
	int n,n1,n2,tab[N]={0};
		
	float ans=0;
	cin>>n>>n1>>n2;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
	}
		
	sort(tab,tab+n);
	for(int i=0;i<min(n1,n2);i++)
	{
		ans+=((float)tab[n-1-i])/min(n1,n2);
	}
	for(int i=0;i<max(n1,n2);i++)
	{
		ans+=((float)tab[n-1-i-min(n1,n2)])/max(n1,n2);
	}
	cout.setf(ios::fixed);
	cout << setprecision(6) << ans ;
		

}
