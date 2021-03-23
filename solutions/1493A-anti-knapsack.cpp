/*
 * Codeforces 1493A - Anti-knapsack
 * Rating: 800 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1493/A
 * Submission: https://codeforces.com/contest/1493/submission/110801263
 * Solved: 2021-03-23 (VIRTUAL)
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
	testc
	{
		int n,k;
		cin>>n>>k;
		
		if(k&1)
			cout<<n-k/2-1;
		else
			cout<<n-k/2;
		cout<<"\n";	
		for(int i=k/2+min(1,k%2);i<=n;i++)
		{
			if(i!=k)
			{
				cout<<i<<" ";
			}
		}
		
		cout<<"\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
