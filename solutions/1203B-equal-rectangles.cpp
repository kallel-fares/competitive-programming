/*
 * Codeforces 1203B - Equal Rectangles
 * Rating: 1200 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1203/B
 * Submission: https://codeforces.com/contest/1203/submission/97593787
 * Solved: 2020-11-03 (PRACTICE)
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
	testc
	{
		int n,tab[505]={0},cst,v=0;
		cin>>n;
		for(int i=0;i<4*n;i++)
		{
			cin>>tab[i];
		}
		
		sort(tab,tab+4*n);
		
		
		cst=tab[0]*tab[4*n-1];
		
		/*for(int i=0;i<n*4;i++)
			cout<<tab[i]<<" ";
		*/	
		for(int i=0;i<n*2;i++)
		{
			if(tab[i*2]!=tab[2*i+1])
				v=1;
				
			if(tab[i]*tab[4*n-1-i]!=cst)
				v=1;
				
		}
		
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
		
		
	}


}
