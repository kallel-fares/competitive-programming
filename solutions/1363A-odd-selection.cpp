/*
 * Codeforces 1363A - Odd Selection
 * Rating: 1200 | Tags: brute force, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1363/A
 * Submission: https://codeforces.com/contest/1363/submission/97378206
 * Solved: 2020-11-01 (PRACTICE)
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
		int x,n,a,imp=0,p=0,v=0;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a&1)
				imp++;
			else
				p++;
		}
		//cout<<p<<" "<<imp<<"\n";
		
		imp=max(imp-!(imp&1),0);
		while(x<imp)
		{
			imp-=2;
			
		}
		if((x-imp)<=p && imp!=0)
			v=1;
	
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
		
		
	}


}
