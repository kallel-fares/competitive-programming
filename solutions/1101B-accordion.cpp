/*
 * Codeforces 1101B - Accordion
 * Rating: 1300 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1101/B
 * Submission: https://codeforces.com/contest/1101/submission/107272578
 * Solved: 2021-02-13 (PRACTICE)
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
	string ch,aux1="[:",aux2="]:";
	cin>>ch;
	
	int v=0,j=0,beg=0,en=ch.size()-1;
	for(int i=0;i<ch.size();i++)
	{
		if(ch[i]==aux1[j])
		{
			j++;
		}
		if(j==2)
		{
			beg=i;
			break;
		}
		
	}
	j=0;
	for(int i=ch.size()-1;i>=0;i--)
	{
		if(ch[i]==aux2[j])
		{
			j++;
		}
		if(j==2)
		{
			en=i;
			break;
		}
		
	}
	//cout<<beg<<" "<<en;
	if(beg==0 || en==ch.size()-1 || en<=beg)
	{
		cout<<"-1";
	}
	else
	{
		int ans=0;
		for(int i=beg;i<=en;i++)
		{
			if(ch[i]=='|')
				ans++;
		}
		cout<<4+ans;
	}
	


}
