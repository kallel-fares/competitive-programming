/*
 * Codeforces 1296C - Yet Another Walking Robot
 * Rating: 1500 | Tags: data structures, implementation
 * Problem:    https://codeforces.com/problemset/problem/1296/C
 * Submission: https://codeforces.com/contest/1296/submission/134773250
 * Solved: 2021-11-09 (PRACTICE)
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
		map<pair<int,int>,vector<int>> spot;
		int n;
		string ch;
		cin>>n>>ch;
		
		map<char,int> smox,smoy;
		smox['U']=0;
		smox['D']=0;
		smox['R']=1;
		smox['L']=-1;
		smoy['U']=1;
		smoy['D']=-1;
		smoy['R']=0;
		smoy['L']=0;
		
		pair<int,int> pos,tans;
		spot[pos].pb(0);
		for(int i=0;i<n;i++)
		{
			pos.first+=smox[ch[i]];
			pos.second+=smoy[ch[i]];
			//cout<<pos.first<<" "<<pos.second<<"\n";
			spot[pos].pb(i+1);
		}
		
		int ans=10000000;
		
		
		/*for(auto x:spot)
		{
			
			
			//cout<<x.first.first<<" "<<x.first.first<<"||\n";
			for(auto y:x.second)
			{
				cout<<y<<" ";
			}
			cout<<"\n";
			
		}*/
		
		
		for(auto x:spot)
		{
			for(int i=0;i<x.second.size()-1;i++)
			{
				if(x.second[i+1]-x.second[i]<ans)
				{
					tans=make_pair(x.second[i],x.second[i+1]);
					ans=x.second[i+1]-x.second[i];
				}
			}
		}
		
		if(ans==10000000)
			cout<<"-1";
		else
			cout<<tans.first+1<<" "<<tans.second;
		cout<<"\n";
		
	}


}
