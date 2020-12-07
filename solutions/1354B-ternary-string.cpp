/*
 * Codeforces 1354B - Ternary String
 * Rating: 1200 | Tags: binary search, dp, implementation, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1354/B
 * Submission: https://codeforces.com/contest/1354/submission/100617204
 * Solved: 2020-12-07 (PRACTICE)
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
	
	testc
	{
		
		int ans=200005;
		vector <pair<int,int>>v;
		string ch;
		cin>>ch;
		//cout<<ch;
		for(int i=0;i<ch.size();i++)
		{
			int c=1;
			while(ch[i]==ch[i+1])
			{
				i++;
				c++;
			}
			v.pb(make_pair(ch[i],c));
			
		}
		//cout<<v.size();
		/*
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<"\n";
		}*/
		
		for(int i=1;i<v.size()-1;i++)
		{
			if(v[i-1].first!=v[i].first && v[i-1].first!=v[i+1].first && v[i].first!=v[i+1].first)
			{
				ans=min(ans,v[i].second);
			}
		}
		if(ans==200005)
			cout<<"0\n";
		else
			cout<<ans+2<<"\n";
	
	}


}
