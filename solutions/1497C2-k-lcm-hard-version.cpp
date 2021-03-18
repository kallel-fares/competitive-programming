/*
 * Codeforces 1497C2 - k-LCM (hard version)
 * Rating: 1600 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1497/C2
 * Submission: https://codeforces.com/contest/1497/submission/110297983
 * Solved: 2021-03-18 (PRACTICE)
 */

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
		int a,b;
		cin>>a>>b;
		
		for(int i=0;i<b-3;i++)
			cout<<"1 ";
		a-=b-3;
		b=3;
		if(a&1)
		{
			cout<<a/2<<" "<<a/2<<" 1\n";
		}
		else
		{
			if(a%4!=0)
				cout<<a/2-1<<" "<<a/2-1<<" 2\n";
			else
				cout<<a/2<<" "<<a/4<<" "<<a/4<<"\n";
		}
	
	}
 
 
}
