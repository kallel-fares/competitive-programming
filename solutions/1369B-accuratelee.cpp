/*
 * Codeforces 1369B - AccurateLee
 * Rating: 1200 | Tags: greedy, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1369/B
 * Submission: https://codeforces.com/contest/1369/submission/97418948
 * Solved: 2020-11-02 (PRACTICE)
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
		int n,v=0;
		string ch;
		cin>>n;
		cin>>ch;
		
		int i=0;
		while(ch[i]=='0')
		{
			i++;
			cout<<'0';
			
		}
		////////////////
		int j,d=i;
		for(j=n-1;j>i;j--)
		{
			
			if(ch[j]=='0' && d==i)
			{
				cout<<'0';
				d=j+1;
			}
		}
		
		for(int k=d;k<n;k++)
			cout<<ch[k];
		cout<<"\n";
	}


}
