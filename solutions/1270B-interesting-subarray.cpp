/*
 * Codeforces 1270B - Interesting Subarray
 * Rating: 1200 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1270/B
 * Submission: https://codeforces.com/contest/1270/submission/97581951
 * Solved: 2020-11-03 (PRACTICE)
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
		int i,a,v=0,n,b;
		cin>>n;
		cin>>a;
		for(int i=1;i<n;i++)
		{
			cin>>b;
			if(abs(a-b)>1)
			{
				v=i;
			}
			a=b;
		}
		if(v)
		{
			cout<<"YES\n"<<v<<" "<<v+1<<"\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}


}
