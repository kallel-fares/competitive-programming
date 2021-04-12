/*
 * Codeforces 1511A - Review Site
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1511/A
 * Submission: https://codeforces.com/contest/1511/submission/112792429
 * Solved: 2021-04-12 (CONTESTANT)
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
		int n,cnt=0;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a==2)
				cnt++;
		}
		cout<<n-cnt<<"\n";
	
	}


}
