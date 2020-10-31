/*
 * Codeforces 1428B - Belted Rooms
 * Rating: 1200 | Tags: graphs, implementation
 * Problem:    https://codeforces.com/problemset/problem/1428/B
 * Submission: https://codeforces.com/contest/1428/submission/97241885
 * Solved: 2020-10-31 (PRACTICE)
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
		int n,left=0,right=0,eq=0,val=0;
		string ch;
		
		cin>>n;
		cin>>ch;
		for(int i=0;i<n;i++)
		{
			
			if(ch[i]=='>')	left++;
			if(ch[i]=='<')	right++;

		}
		
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='-')
			{
				if(eq==0)
				{
					eq=2;					
				}
				else
				{
					eq++;
				}
			}
			else
			{
				val+=eq;
				eq=0;
			}
		
		}
		val+=eq;
		if(left==0 || right==0)
		{
			cout<<n<<"\n";
		}
		else
		{
			if(ch[0]==ch[n-1] && ch[0]=='-')
			{
				cout<<val-1<<"\n";
			}
			else
			{
				cout<<val<<"\n";
			}
		}
		
	}


}
