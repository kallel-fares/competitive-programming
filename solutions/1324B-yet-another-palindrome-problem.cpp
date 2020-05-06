/*
 * Codeforces 1324B - Yet Another Palindrome Problem
 * Rating: 1100 | Tags: brute force, strings
 * Problem:    https://codeforces.com/problemset/problem/1324/B
 * Submission: https://codeforces.com/contest/1324/submission/79104628
 * Solved: 2020-05-06 (VIRTUAL)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int tab[N]={0},freq[N]={0},v=0;
		int n,mini=9000,s=0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>tab[i],freq[tab[i]]++;
		//for(int i=0;i<n;i++)cout<<freq[tab[i]];
		for(int i=0;i<n-1;i++)
		{
			if(freq[tab[i]]>2)
			{
				v=1;
				break;
			}
			else
				if(freq[tab[i]]==2 && tab[i]!=tab[i+1])
					v=1;
				else
					freq[tab[i]]--;
		}
		if(v==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
}
