/*
 * Codeforces 1082A - Vasya and Book
 * Rating: 1200 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1082/A
 * Submission: https://codeforces.com/contest/1082/submission/101987120
 * Solved: 2020-12-21 (PRACTICE)
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
		int n,d,x,y;
		cin>>n>>x>>y>>d;
		
		
		
		if(abs(y-x)%d==0)
			cout<<abs(y-x)/d;
		else if((n-y)%d==0)
		{
			if((y-1)%d==0)
			{
				cout<<min((n-y)/d+min((n-x)%d,1)+(n-x)/d,(y-1)/d+x/d+min(1,x%d));
			}
			else
			{
				cout<<(n-y)/d+min((n-x)%d,1)+(n-x)/d;
			}
		}
		else if((y-1)%d==0)
		{	
			//cout<<"sefh";
			cout<<(y-1)/d+x/d+min(1,x%d);
			
		}
		else
			cout<<"-1";
		cout<<"\n";	
	}


}
