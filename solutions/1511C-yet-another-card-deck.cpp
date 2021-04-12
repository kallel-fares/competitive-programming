/*
 * Codeforces 1511C - Yet Another Card Deck
 * Rating: 1100 | Tags: brute force, data structures, implementation, trees
 * Problem:    https://codeforces.com/problemset/problem/1511/C
 * Submission: https://codeforces.com/contest/1511/submission/112829169
 * Solved: 2021-04-12 (CONTESTANT)
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

	
		int n,q;
		cin>>n>>q;
		map<int,int> freq;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(!freq[a])
				freq[a]=i+1;
		}
		
		
		for(int i=0;i<q;i++)
		{
			int a;
			cin>>a;
			cout<<freq[a]<<" ";
			for(int i=0;i<=50;i++)
			{
				if(freq[i]<freq[a])
					freq[i]++;
			}
			
			
			freq[a]=1;
		}
		
		
		
		cout<<"\n";
	
	


}
