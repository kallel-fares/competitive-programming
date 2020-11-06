/*
 * Codeforces 1017B - The Bits
 * Rating: 1200 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1017/B
 * Submission: https://codeforces.com/contest/1017/submission/97777641
 * Solved: 2020-11-06 (PRACTICE)
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
	
	ll n,p1=0,p2=0,p3=0,p4=0;
	string ch1,ch2;
		cin>>n;
		cin>>ch1>>ch2;
		for(int i=0;i<n;i++)
		{
			if(ch1[i]==ch2[i])
			{
				if(ch1[i]=='1')
				{
					p1++;
				}
				else
				{
					p2++;
				}
			}
			else
			{
				if(ch1[i]=='1')
				{
					p3++;
				}
				else
				{
					p4++;
				}
			}
			
			
			
		}
		//cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<" ";
		cout<<p1*p2+p3*p4+p2*p3;
	
	


}
