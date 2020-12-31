/*
 * Codeforces 1443B - Saving the City
 * Rating: 1300 | Tags: dp, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1443/B
 * Submission: https://codeforces.com/contest/1443/submission/102904014
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
		vector<pair<int,int>> vect;
		int a,b;
		cin>>a>>b;
		string ch;
		cin>>ch;
		
		int i=0;
		
		for(int i=0;i<ch.size();i++)
		{
			int v=1;
			while(ch[i]==ch[i+1] && i<ch.size())
			{
				v++;
				i++;
			}
			
			vect.pb(make_pair(ch[i],v));
			
		}
		
		/*for(auto x:vect)
		{
			cout<<x.first<<"\n";
		}
		cout<<"\n";*/
		
		
		
		if(vect.size()==2)
		{
			cout<<a<<"\n";
			continue;
		}
		
		if(vect.size()==1)
		{
			if(vect[0].first=='1')
			{
				cout<<a<<"\n";
			}
			else
			{
				cout<<"0\n";
			}
			continue;
		}
		
		int ans=a;
		for(int i=2;i<vect.size();i++)
		{
			if(vect[i].first=='1')
			{
				ans+=min(a,vect[i-1].second*b);
			}
		}
		
		cout<<ans<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
