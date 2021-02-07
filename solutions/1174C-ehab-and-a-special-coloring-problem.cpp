/*
 * Codeforces 1174C - Ehab and a Special Coloring Problem
 * Rating: 1300 | Tags: constructive algorithms, number theory
 * Problem:    https://codeforces.com/problemset/problem/1174/C
 * Submission: https://codeforces.com/contest/1174/submission/106737821
 * Solved: 2021-02-07 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector<int> vec(N);
	int v=1;
	for(int i=2;i<=100000;i++)
	{
		if(!vec[i])
		{
			for(int j=i;j<=100000;j+=i)
			{
				if(!vec[j])
					vec[j]=v;
			}	
			v++;
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		cout<<vec[i]<<" ";
	}


}
