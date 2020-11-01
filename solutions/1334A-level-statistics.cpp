/*
 * Codeforces 1334A - Level Statistics
 * Rating: 1200 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1334/A
 * Submission: https://codeforces.com/contest/1334/submission/97384554
 * Solved: 2020-11-01 (PRACTICE)
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
		int n,prev_play,prev_clear,a,b,v=0;
		cin>>n;
		cin>>prev_play>>prev_clear;
		if(prev_play<prev_clear)
			v=1;
		for(int i=1;i<n;i++)
		{
			cin>>a>>b;
			if(a<prev_play || b<prev_clear || a<b)
				v=1;
			
			if(b-prev_clear>a-prev_play)
				v=1;
			
			prev_play=a;
			prev_clear=b;
			
		}
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}


}
