/*
 * Codeforces 1418B - Negative Prefixes
 * Rating: 1300 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1418/B
 * Submission: https://codeforces.com/contest/1418/submission/104607712
 * Solved: 2021-01-17 (PRACTICE)
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
		
		vector<int> a(n),loc(n);
		vector<int> aux;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		
		for(int i=0;i<n;i++)
		{
			cin>>loc[i];
			if(!loc[i])
			{
				aux.pb(a[i]);
			}
		}
		
		sort(aux.begin(),aux.end(),greater<int>());
		int j=0;
		for(int i=0;i<n;i++)
		{
			if(!loc[i])
			{
				cout<<aux[j]<<" ";
				j++;
			}
			else
			{
				cout<<a[i]<<" ";
			}
		}
		
		cout<<"\n";
	}


}
