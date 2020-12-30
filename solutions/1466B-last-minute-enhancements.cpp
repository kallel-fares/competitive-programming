/*
 * Codeforces 1466B - Last minute enhancements
 * Rating: 800 | Tags: dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1466/B
 * Submission: https://codeforces.com/contest/1466/submission/102869053
 * Solved: 2020-12-30 (PRACTICE)
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
		map <int,int>m;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(m[a])
			{
				m[a+1]=1;
			}
			else
			{
				m[a]=1;
			}
		}
		
		cout<<m.size()<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
