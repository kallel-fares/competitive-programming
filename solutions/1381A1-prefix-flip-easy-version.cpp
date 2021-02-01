/*
 * Codeforces 1381A1 - Prefix Flip (Easy Version)
 * Rating: 1300 | Tags: constructive algorithms, data structures, strings
 * Problem:    https://codeforces.com/problemset/problem/1381/A1
 * Submission: https://codeforces.com/contest/1381/submission/106225880
 * Solved: 2021-02-01 (PRACTICE)
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
		int n,v=0;
		vector<int> ans;
		cin>>n;
		string ch1,ch2;
		cin>>ch1>>ch2;
		
		int j=0;
		int k=-1;
		for(int i=n-1;i>=0;i--)
		{
			if(!v)
			{
				k++;
				j=k;
			}
			else
				j=n-1-j;
				
			if(!v)
			{
				if(ch1[j]==ch2[i])
				{
					ans.pb(1);
				}
				ans.pb(i+1);
			}
			else
			{
				if(ch1[j]!=ch2[i])
				{
					ans.pb(1);
				}
				ans.pb(i+1);
			}
			
			v=(v+1)%2;
			
		}
		
		
		cout<<ans.size()<<" ";
		for(auto x:ans)
		{
			cout<<x<<" ";
		}
		cout<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
