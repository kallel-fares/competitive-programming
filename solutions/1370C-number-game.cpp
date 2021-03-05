/*
 * Codeforces 1370C - Number Game
 * Rating: 1400 | Tags: games, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1370/C
 * Submission: https://codeforces.com/contest/1370/submission/109182550
 * Solved: 2021-03-05 (PRACTICE)
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
		
		if(n==1)
		{
			cout<<"FastestFinger\n";
			continue;
		}
		if(n&1 && n!=1)
			cout<<"Ashishgup";
		else
		{
			int v=0,v1=0;
			while(!(n&1))
			{
				n/=2;
				v++;
			}
			int i=3;
			while(i<=sqrt(n))
			{
				if(n%i==0)
				{
					v1=1;
					break;
				}
				i+=2;
			}
			if(n==1)
				v1=-1;
				
			if(v1==1)
			{
				cout<<"Ashishgup";
			}
			else if(v1==-1)
			{
				if(v<=1)
				{	
					cout<<"Ashishgup";
				}
				else
				{
					cout<<"FastestFinger";
				}
			}
			else
			{
				if(v<=1)
				{	
					cout<<"FastestFinger";
				}
				else
				{
					cout<<"Ashishgup";
				}
			}
			
			
		}
		
		cout<<"\n";
	
	}


}
