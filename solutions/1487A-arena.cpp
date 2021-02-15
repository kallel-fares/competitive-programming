/*
 * Codeforces 1487A - Arena
 * Rating: 800 | Tags: implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1487/A
 * Submission: https://codeforces.com/contest/1487/submission/107412371
 * Solved: 2021-02-15 (CONTESTANT)
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
		
		int n,mini=1e9+5;
		cin>>n;
		vector<int>vec(n);
		map<int,int> freq;
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			mini=min(mini,vec[i]);
			freq[vec[i]]++;
		}
		cout<<n-freq[mini]<<"\n";
	
	}


}
