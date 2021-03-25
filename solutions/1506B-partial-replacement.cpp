/*
 * Codeforces 1506B - Partial Replacement
 * Rating: 1100 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1506/B
 * Submission: https://codeforces.com/contest/1506/submission/111026319
 * Solved: 2021-03-25 (CONTESTANT)
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
		int n,k;
		cin>>n>>k;
		string ch;
		cin>>ch;
		int s=0,e=0;
		for(int i=0;i<ch.size();i++)
		{
			if(ch[i]=='*')
			{
				s=i;
				break;
			}
		}
		for(int i=ch.size()-1;i>=0;i--)
		{
			if(ch[i]=='*')
			{
				e=i;
				break;
			}
		}
		
		int v=0;
		if(s!=e)
			v+=2;
		else
			v++;
		while(s+k<e)
		{
			for(int i=s+k;i>=s;i--)
			{
				if(ch[i]=='*')
				{
					v++;
					s=i;
					break;	
				}
				
			}
	
		}
		cout<<v<<"\n";
	}


}
