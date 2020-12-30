/*
 * Codeforces 1466A - Bovine Dilemma
 * Rating: 800 | Tags: brute force, geometry, math
 * Problem:    https://codeforces.com/problemset/problem/1466/A
 * Submission: https://codeforces.com/contest/1466/submission/102868869
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
		vector <int> vect(n);
		map <int,int>m;
		
		for(int i=0;i<n;i++)
		{
			cin>>vect[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				m[abs(vect[i]-vect[j])]=1;
				
			}
		}
		
		cout<<m.size()<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
