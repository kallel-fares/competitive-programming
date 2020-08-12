/*
 * Codeforces 1395A - Boboniu Likes to Color Balls
 * Rating: 1000 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1395/A
 * Submission: https://codeforces.com/contest/1395/submission/89678618
 * Solved: 2020-08-12 (CONTESTANT)
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
	testc
	{
		int a,b,c,d,imp=0,p=0;
		cin>>a>>b>>c>>d;
		if(a&1==1)
			imp++;	
		if(a&1==0)
			p++;
		if(b&1==1)
			imp++;
		if(b&1==0)
			p++;
		if(c&1==1)
			imp++;
		if(c&1==0)
			p++;
		if(d&1==1)
			imp++;
		if(d&1==0)
			p++;
		int v=0;
		if(a==0||b==0||c==0)
		{
			if(imp>1)
			{
				cout<<"No";
				v=1;	
			}
		}
		else
		{
			if(imp==2)
			{
				cout<<"No";
				v=1;	
			}
		}
		if(v==0)
			cout<<"Yes";
		cout<<"\n";
	}


}
