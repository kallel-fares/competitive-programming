/*
 * Codeforces 1491A - K-th Largest Value
 * Rating: 800 | Tags: brute force, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1491/A
 * Submission: https://codeforces.com/contest/1491/submission/108675240
 * Solved: 2021-02-28 (CONTESTANT)
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
	
	int n,q,ones=0;
	cin>>n>>q;
	
	vector<int>vec(n);
		
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		if(vec[i])
			ones++;
		
	}
	int a,b;
	while(q--)
	{
		cin>>a>>b;
		
		if(a==1)
		{
			vec[b-1]=1-vec[b-1];
			
			if(vec[b-1])
			{
				ones++;
			}
			else
				ones--;
		}
		else
		{
			if(b<=ones)	
				cout<<"1\n";
			else
				cout<<"0\n";
		}
	}
	
	
	


}
