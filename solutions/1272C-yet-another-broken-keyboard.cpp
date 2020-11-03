/*
 * Codeforces 1272C - Yet Another Broken Keyboard
 * Rating: 1200 | Tags: combinatorics, dp, implementation
 * Problem:    https://codeforces.com/problemset/problem/1272/C
 * Submission: https://codeforces.com/contest/1272/submission/97567512
 * Solved: 2020-11-03 (PRACTICE)
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
	
		string ch;
		char a;
		int freq[100]={0},n,k;
		ll ans=0,count=0;
		
		cin>>n>>k;
		cin>>ch;
		for(int i=0;i<k;i++)
		{
			cin>>a;
			freq[a-'a']++;	
		}
		
		for(int i=0;i<n;i++)
		{
			if(freq[ch[i]-'a'])
			{
				count++;
			}
			else
			{
				
				ans+=(count*(count+1))/2;
				count=0;
			}
		}
		cout<<ans+(count*(count+1))/2<<"\n";
	


}
