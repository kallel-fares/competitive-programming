/*
 * Codeforces 1194C - From S To T
 * Rating: 1300 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1194/C
 * Submission: https://codeforces.com/contest/1194/submission/102927027
 * Solved: 2020-12-31 (PRACTICE)
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
		string s,t,p;
		cin>>s>>t>>p;
		
		map <int,int> m;
		
		for(int i=0;i<p.size();i++)
		{
			m[p[i]]++;
		}
		
		int flag=0,cnt=0,v=0;
		for(int i=0;i<s.size();i++)
		{
			for(int j=flag;j<t.size();j++)
			{
				if(s[i]==t[j])
				{
					flag=j+1;
					t[j]=' ';
					cnt++;
					break;
				}
			}
		}
		
		for(int i=0;i<t.size();i++)
		{
			if(t[i]!=' ')
			{
				if(!m[t[i]])
				{
					v=1;
					break;
				}
				else
				{
					m[t[i]]--;
				}
			}
		}
		
		if(v || cnt!=s.size())
		{
			cout<<"NO\n";
		}
		else
		{
			
			cout<<"YES\n";
		}
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
