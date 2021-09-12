/*
 * Codeforces 1527B1 - Palindrome Game (easy version)
 * Rating: 1200 | Tags: constructive algorithms, games
 * Problem:    https://codeforces.com/problemset/problem/1527/B1
 * Submission: https://codeforces.com/contest/1527/submission/128567102
 * Solved: 2021-09-12 (PRACTICE)
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
		int n,zer=0;
		
		string ch;
		cin>>n;
		cin>>ch;
		for(int i=0;i<n;i++)
			if(ch[i]=='0')
				zer++;
				
		if(zer&1)
		{
			if(zer==1)
				cout<<"BOB";
			else
				cout<<"ALICE";
		}
		else
			cout<<"BOB";
		cout<<"\n";		
	}


}
