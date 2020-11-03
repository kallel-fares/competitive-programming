/*
 * Codeforces 1294B - Collecting Packages
 * Rating: 1200 | Tags: implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1294/B
 * Submission: https://codeforces.com/contest/1294/submission/97559110
 * Solved: 2020-11-03 (PRACTICE)
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
		vector<pair<int,int>>vect;
		int n,a,b,x=0,y=0,v=0;
		string ch;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>b>>a;
			
			vect.pb(make_pair(a,b));
		}
		sort(vect.begin(),vect.end());
		
		
		
		for(int i=0;i<n;i++)
		{
			if(y>vect[i].second)
			{
				v=1;
				break;
			}
			
			while(y<vect[i].second)
			{
				ch+="R";
				y++;
			}
			while(x<vect[i].first)
			{
				ch+="U";
				x++;
			}
			
			
		}
		if(v)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			cout<<ch<<"\n";
		}
		
	}


}
