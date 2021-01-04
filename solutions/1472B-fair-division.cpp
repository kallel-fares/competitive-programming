/*
 * Codeforces 1472B - Fair Division
 * Rating: 800 | Tags: dp, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1472/B
 * Submission: https://codeforces.com/contest/1472/submission/103250939
 * Solved: 2021-01-04 (CONTESTANT)
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
		int n;
		cin>>n;
		int tab[3]={0};
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			tab[a]++;
			
		}
		
		tab[2]%=2;
		
		if(tab[2])
			tab[1]-=2;
		
		
		if(tab[1]%2==0 && tab[1]>=0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
