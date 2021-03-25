/*
 * Codeforces 1506D - Epic Transformation
 * Rating: 1400 | Tags: constructive algorithms, data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1506/D
 * Submission: https://codeforces.com/contest/1506/submission/111025930
 * Solved: 2021-03-25 (CONTESTANT)
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
		map<int,int>freq;
		int n,maxi=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			freq[a]++;
			maxi=max(maxi,freq[a]);
		}
		
		int aux=n-maxi;
		cout<<max(max(maxi-aux,0),n&1)<<"\n";
			
	
	}


}
