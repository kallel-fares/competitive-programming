/*
 * Codeforces 1512A - Spy Detected!
 * Rating: 800 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1512/A
 * Submission: https://codeforces.com/contest/1512/submission/112919419
 * Solved: 2021-04-13 (VIRTUAL)
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
		int n,val;
		cin>>n;
		
		
		vector<int> vec(n),freq(1000);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			if(freq[vec[i]])
				val=vec[i];
			else
				freq[vec[i]]++;
		}
		//cout<<val<<" ";
		for(int i=0;i<n;i++)
		{
			if(vec[i]!=val)
			{
				cout<<i+1;
				break;
			}
		}
		cout<<"\n";
		
		
		
		
		
	
	}


}
