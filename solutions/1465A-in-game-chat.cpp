/*
 * Codeforces 1465A - In-game Chat
 * Rating: 800 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1465/A
 * Submission: https://codeforces.com/contest/1465/submission/101865869
 * Solved: 2020-12-20 (CONTESTANT)
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
	testc
	{
		int n;
		string ch;
		int s=0;
		cin>>n;
		cin>>ch;
		for(int i=n-1;i>=0;i--)
		{
			if(ch[i]!=')')
				break;
			s++;
			
		}
		//cout<<s<<" ";
		if(s>n-s)
			cout<<"Yes";
		else
			cout<<"No";
		cout<<"\n";
	}


}
