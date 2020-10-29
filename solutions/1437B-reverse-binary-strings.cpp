/*
 * Codeforces 1437B - Reverse Binary Strings
 * Rating: 1200 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1437/B
 * Submission: https://codeforces.com/contest/1437/submission/97075319
 * Solved: 2020-10-29 (PRACTICE)
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
		int n,v=0;
		string ch;
		cin>>n>>ch;
	//	int i=0,j=n-2;
		for(int i=0;i<n-1;i++)
		{
			if(ch[i]==ch[i+1])
			{
				v++;
			}
		
			
		}
		cout<<v/2+(v&1)<<"\n";
	}


}
