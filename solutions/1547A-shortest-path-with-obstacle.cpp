/*
 * Codeforces 1547A - Shortest Path with Obstacle
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1547/A
 * Submission: https://codeforces.com/contest/1547/submission/121923002
 * Solved: 2021-07-10 (CONTESTANT)
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
		int x1,y1,x2,x3,y2,y3,ans=0;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if(x1==x2 && x1==x3)
		{
			if((y3<y1 && y3>y2) || (y3>y1 && y3<y2))
			{
				ans+=2;
			}
		}
		
		if(y1==y2 && y1==y3)
		{
			if((x3<x1 && x3>x2) || (x3>x1 && x3<x2))
			{
				ans+=2;
			}
		}
		
		
		cout<<abs(x1-x2)+abs(y1-y2)+ans<<"\n";
	}


}
