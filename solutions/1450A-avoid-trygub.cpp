/*
 * Codeforces 1450A - Avoid Trygub
 * Rating: 800 | Tags: constructive algorithms, sortings
 * Problem:    https://codeforces.com/problemset/problem/1450/A
 * Submission: https://codeforces.com/contest/1450/submission/100533014
 * Solved: 2020-12-06 (CONTESTANT)
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
		int n,freq[50]={0};
		string ch,ans;
		cin>>n>>ch;
		for(int i=0;i<n;i++)
		{
			freq[ch[i]-'a']++;
		}
		
		for(int i=0;i<=26;i++)
		{
			while(freq[i]--)
			{
				
				ans+='a'+i;	
			}
		}
		cout<<ans<<"\n";
	}


}
