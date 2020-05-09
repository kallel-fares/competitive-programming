/*
 * Codeforces 1352A - Sum of Round Numbers
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1352/A
 * Submission: https://codeforces.com/contest/1352/submission/79490633
 * Solved: 2020-05-09 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,i=0;
		vector <int>v;
		cin>>n;
		while(n!=0)
		{
			if(n%10!=0)
			{
				v.push_back((n%10)*(int)pow(10,i));
			}
			n/=10;
			i++;
		}
		
		//v.erase(v.end()-1);
		cout<<v.size()<<"\n";
		for(auto x:v)
		{
			cout<<x<<" ";
		}
		cout<<"\n";
	}

}
