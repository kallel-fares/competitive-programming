/*
 * Codeforces 1512B - Almost Rectangle
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1512/B
 * Submission: https://codeforces.com/contest/1512/submission/112923106
 * Solved: 2021-04-13 (VIRTUAL)
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
		int n;
		cin>>n;
		vector<string> vec;
		vector<pair<int,int>>coor;
		
		string aux;
		for(int i=0;i<n;i++)
		{
			cin>>aux;
			vec.pb(aux);
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(vec[i][j]=='*')
					coor.pb(make_pair(j,i));
			}
		}
		/*for(auto x:coor)
			cout<<x.first<<" "<<x.second<<"\n";*/
		if(coor[0].first==coor[1].first)
		{
			if(coor[0].first+1<=n-1)
			{
				vec[coor[0].second][coor[0].first+1]='*';
				vec[coor[1].second][coor[0].first+1]='*';
			}
			else
			{
				vec[coor[0].second][coor[0].first-1]='*';
				vec[coor[1].second][coor[0].first-1]='*';
			}
				
		}
		else if(coor[0].second==coor[1].second)
		{
			if(coor[0].second+1<=n-1)
			{
				vec[coor[0].second+1][coor[0].first]='*';
				vec[coor[0].second+1][coor[1].first]='*';
			}
			else
			{
				vec[coor[0].second-1][coor[0].first]='*';
				vec[coor[0].second-1][coor[1].first]='*';
			}
		}
		
		if(coor[0].first!=coor[1].first && coor[0].second!=coor[1].second)
		{
			vec[coor[0].second][coor[1].first]='*';
			vec[coor[1].second][coor[0].first]='*';
		}
		for(auto x:vec)
			cout<<x<<"\n";
		
		
	
	}


}
