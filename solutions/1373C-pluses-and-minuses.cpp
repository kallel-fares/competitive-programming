/*
 * Codeforces 1373C - Pluses and Minuses
 * Rating: 1300 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1373/C
 * Submission: https://codeforces.com/contest/1373/submission/106237169
 * Solved: 2021-02-02 (PRACTICE)
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
		
		string ch;
		ll mar=0,v=0,ans=0,mini=0;
		vector<int> vec;
		cin>>ch;
		int n=ch.size();
		
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='-')
			{
				v--;		
			}
			else
			{
				v++;
			}		
			vec.pb(v);
		}
		
		for(int i=0;i<n;i++)
		{
			while(vec[i]>=mini && i<n)
			{
				i++;
			}	
			if(i<n)
			{
				ans+=i+1;
				mini=vec[i];
				
			}
		}
		ans+=n;
		cout<<ans<<"\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
