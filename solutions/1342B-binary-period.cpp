/*
 * Codeforces 1342B - Binary Period
 * Rating: 1100 | Tags: constructive algorithms, strings
 * Problem:    https://codeforces.com/problemset/problem/1342/B
 * Submission: https://codeforces.com/contest/1342/submission/79082569
 * Solved: 2020-05-05 (PRACTICE)
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
		string ch;
		cin>>ch;
		int ones=count(ch.begin(),ch.end(),'1');
		if(ones==ch.size() || ones==0)
		{
			cout<<ch<<"\n";
			continue;
		}
		else
		{
			for(int i=0;i<ch.size()*2;i++)
			{
				if(i&1)
					cout<<"1";
				else
					cout<<"0";
			}
		}
		cout<<"\n";
			
		
		
	}

}
