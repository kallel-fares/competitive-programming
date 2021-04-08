/*
 * Codeforces 1351C - Skier
 * Rating: 1400 | Tags: data structures, implementation
 * Problem:    https://codeforces.com/problemset/problem/1351/C
 * Submission: https://codeforces.com/contest/1351/submission/112313287
 * Solved: 2021-04-08 (PRACTICE)
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
	map<char,pair<int,int>> dir;
	dir['N']=make_pair(0,1);
	dir['S']=make_pair(0,-1);
	dir['E']=make_pair(1,0);
	dir['W']=make_pair(-1,0);
	testc
	{
		
		string ch;
		cin>>ch;
		
		
		pair<ll,ll> pos{0,0};
		
		map<pair<pair<ll,ll>,pair<ll,ll>>,ll>freq;
		ll ans=0;
		
		for(int i=0;i<ch.size();i++)
		{
			
			pair<ll,ll> aux=pos;
			
			
			pos.first+=dir[ch[i]].first;
			pos.second+=dir[ch[i]].second;	
			
			
			if(freq[make_pair(pos,aux)])
			{
				ans+=1;
			}
			else
			{
				ans+=5;
				freq[make_pair(pos,aux)]++;
				freq[make_pair(aux,pos)]++;
			}
			
			
		}
		
		/*for(auto x:freq)
			cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<"\n";*/
		cout<<ans<<"\n";
		
	
	}
 
 
}
