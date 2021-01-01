/*
 * Codeforces 158A - Next Round
 * Rating: 800 | Tags: *special, implementation
 * Problem:    https://codeforces.com/problemset/problem/158/A
 * Submission: https://codeforces.com/contest/158/submission/102992844
 * Solved: 2021-01-01 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	
	int n,k;
	cin>>n>>k;
	
	
	int v=0;
	int ans=0,ans1=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		
		if(i<k-1 && a!=0)
			ans1++;
			
		if(i==k-1)
			ans=a;
		if(i>=k-1 && a==ans && ans>0)
			v++;
	}
	
	cout<<v+ans1<<"\n";


}
