/*
 * Codeforces 1360C - Similar Pairs
 * Rating: 1100 | Tags: constructive algorithms, graph matchings, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1360/C
 * Submission: https://codeforces.com/contest/1360/submission/81244501
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
		int tab[N]={0},dif=1001,p=0,imp=0;
		
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			tab[a]++;
			if(a&1)
				imp++;
			else
				p++;
		}
		//cout<<p<<" "<<imp;
		for(int i=1;i<=100;i++)
		{
			if(imp%2==0 && p%2==0)
				break;
			
			if(tab[i]>0 && tab[i+1]>0)
			{
				p--;
				imp--;
			}
						
		}
		if(imp%2==0 && p%2==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
		
	}
	


}
