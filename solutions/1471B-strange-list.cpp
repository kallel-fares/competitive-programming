/*
 * Codeforces 1471B - Strange List
 * Rating: 1100 | Tags: brute force, greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1471/B
 * Submission: https://codeforces.com/contest/1471/submission/103539994
 * Solved: 2021-01-06 (VIRTUAL)
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
		vector<pair<int,ll>> vect;
		
		int n,x;
		cin>>n>>x;
		
		int a;
		cin>>a;
		ll ans=a;
		vect.pb(make_pair(a,1));
		for(int i=1;i<n;i++)
		{
			cin>>a;
			ans+=a;
			if(vect[vect.size()-1].first==a)
			{
				vect[vect.size()-1].second+=1;
			}
			else
			{
				vect.pb(make_pair(a,1));
			}			
		}
		
		for(int i=0;i<vect.size();i++)
		{
			
			if(vect[i].first%x==0)
			{
				ans+=vect[i].first*vect[i].second;
				if(vect[vect.size()-1].first==vect[i].first/x)
				{
					vect[vect.size()-1].second+=x*vect[i].second;
				}
				else
				{
					vect.pb(make_pair(vect[i].first/x,x*vect[i].second));
				}
			}
			else
			{
				break;
			}
		}
		cout<<ans<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
