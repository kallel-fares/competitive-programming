/*
 * Codeforces 1405C - Balanced Bitstring
 * Rating: 1500 | Tags: greedy, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1405/C
 * Submission: https://codeforces.com/contest/1405/submission/92510041
 * Solved: 2020-09-11 (PRACTICE)
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
		int n,k,v=0;
		string ch;
		cin>>n>>k;
		cin>>ch;
		
		for(int i=0;i<ch.length()-k;i++)
		{
			if(ch[i]=='0')
			{
				if(ch[i+k]=='1')
					v=1;
				if(ch[i+k]=='?')
					ch[i+k]='0';
			}
			if(ch[i]=='1')
			{
				if(ch[i+k]=='0')
					v=1;
				if(ch[i+k]=='?')
					ch[i+k]='1';
			}
		}
		
		int zero=0,one=0;
		for(int i=0;i<k;i++)
		{
			if(ch[i]=='0')
				zero++;
			if(ch[i]=='1')
				one++;
		}
		if(zero*2>k || one*2>k)
			v=1;
		for(int i=k;i<ch.length();i++)
		{
			if(ch[i]=='0')
				zero++;
			if(ch[i]=='1')
				one++;
			if(ch[i-k]=='0')
				zero--;
			if(ch[i-k]=='1')
				one--;
			if(zero*2>k || one*2>k)
				v=1;
		}
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}

}
