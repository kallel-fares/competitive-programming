/*
 * Codeforces 1430A - Number of Apartments
 * Rating: 900 | Tags: brute force, constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1430/A
 * Submission: https://codeforces.com/contest/1430/submission/95697710
 * Solved: 2020-10-16 (VIRTUAL)
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
		int n,ans1=0,ans2=0,ans3=0,v=0;
		cin>>n;
		for(int i=0;i<=333;i++)
		{
			for(int j=0;j<=200;j++)
			{
				if(n-i*3-j*5<0)
					break;
				if((n-i*3-j*5)%7==0)
				{
					ans1=i;
					ans2=j;
					ans3=(n-i*3-j*5)/7;
					v=1;
				}
			}
		}
		if(v)
			cout<<ans1<<" "<<ans2<<" "<<ans3<<"\n";
		else
			cout<<-1<<"\n";		
	}

}
