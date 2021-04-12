/*
 * Codeforces 1511D - Min Cost String
 * Rating: 1600 | Tags: brute force, constructive algorithms, graphs, greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1511/D
 * Submission: https://codeforces.com/contest/1511/submission/112861518
 * Solved: 2021-04-12 (PRACTICE)
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
	
		int n,k;
		string ans="";
		
		cin>>n>>k;
		if(k==1)
		{
			for(int i=0;i<n;i++)
				ans+='a';
		}
		else
		{
			ans+="a";
			while(ans.size()<200000)
			{
				ans+='a';
				for(int i=1;i<k;i++)
				{
					ans+=char('a'+i);
					ans+=char('a'+i);
					for(int j=i-1;j>=1;j--)
					{
					
						ans+=char('a'+j);	
						ans+=char('a'+i);
					}
					
					ans+='a';
				}
			}
			
			
		}
		for(int i=0;i<n;i++)
			cout<<ans[i];
		cout<<"\n";
	
	


}
