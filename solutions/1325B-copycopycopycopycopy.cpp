/*
 * Codeforces 1325B - CopyCopyCopyCopyCopy
 * Rating: 800 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1325/B
 * Submission: https://codeforces.com/contest/1325/submission/128116564
 * Solved: 2021-09-07 (PRACTICE)
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
		map<int,int> freq;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>> a;
			freq[a]++;
			
		}
		cout<<freq.size()<<"\n";
	}


}
