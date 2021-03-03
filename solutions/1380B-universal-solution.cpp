/*
 * Codeforces 1380B - Universal Solution
 * Rating: 1400 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1380/B
 * Submission: https://codeforces.com/contest/1380/submission/109008476
 * Solved: 2021-03-03 (PRACTICE)
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
		string ch;
		int maxi=0;
		cin>>ch;
		
		map<char,int> freq;
		
		for(int i=0;i<ch.size();i++)
		{
			
			freq[ch[i]]++;
			maxi=max(maxi,freq[ch[i]]);
		}
			
		for(auto x:freq)
		{
			if(x.second == maxi)
			{
				if(x.first=='R')
				{
					for(int i=0;i<ch.size();i++)
						cout<<"P";
				}
				if(x.first=='P')
				{
					for(int i=0;i<ch.size();i++)
						cout<<"S";
				}
				if(x.first=='S')
				{
					for(int i=0;i<ch.size();i++)
						cout<<"R";
				}
				break;
				
			}
			
		}
		cout<<"\n";
		
		
	
	}


}
