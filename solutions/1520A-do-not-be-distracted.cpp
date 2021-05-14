/*
 * Codeforces 1520A - Do Not Be Distracted!
 * Rating: 800 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1520/A
 * Submission: https://codeforces.com/contest/1520/submission/116207139
 * Solved: 2021-05-14 (VIRTUAL)
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
		
		vector<int> freq(100);
		int n;
		cin>>n;
		string ch;
		cin>>ch;
		
		int v=0;
		for(int i=1;i<n;i++)
		{
			if(freq[ch[i]]==-1)
				v=1;
			if(ch[i]!=ch[i-1])
				freq[ch[i-1]]=-1;
				
				
				
		}
		
		if(v)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
		
		
	
	}


}
