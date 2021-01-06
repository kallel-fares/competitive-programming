/*
 * Codeforces 1471A - Strange Partition
 * Rating: 900 | Tags: greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1471/A
 * Submission: https://codeforces.com/contest/1471/submission/103534685
 * Solved: 2021-01-06 (VIRTUAL)
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
		//vector<int> vect()
		int n,x;
		ll maxi=0,sum=0;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			maxi+=a/x+min(1,a%x);
			sum+=a;
		}
		
		cout<<sum/x+min((ll)1,sum%x)<<" "<<maxi<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
