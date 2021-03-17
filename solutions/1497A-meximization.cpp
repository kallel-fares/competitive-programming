/*
 * Codeforces 1497A - Meximization
 * Rating: 800 | Tags: brute force, data structures, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1497/A
 * Submission: https://codeforces.com/contest/1497/submission/110189011
 * Solved: 2021-03-17 (CONTESTANT)
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
		vector<int> vec,freq(101);
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(freq[a])
			{
				vec.pb(a);
			}	
			else
				freq[a]++;
		}
		
		for(int i=0;i<=100;i++)
		{
			if(freq[i])
				cout<<i<<" ";
			
		}
			
		for(auto x:vec)
			cout<<x<<" ";
		cout<<"\n";
	}


}
