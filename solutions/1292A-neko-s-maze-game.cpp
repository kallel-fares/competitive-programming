/*
 * Codeforces 1292A - NEKO's Maze Game
 * Rating: 1400 | Tags: data structures, dsu, implementation
 * Problem:    https://codeforces.com/problemset/problem/1292/A
 * Submission: https://codeforces.com/contest/1292/submission/113562057
 * Solved: 2021-04-19 (PRACTICE)
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
	
	int n,q;
	cin>>n>>q;
		
	vector<int> vec[2];
		
	for(int i=0;i<=n+1;i++)
		vec[0].pb(0),vec[1].pb(0);
	
	int v=0;
	
	for(int i=0;i<q;i++)
	{
		int a,b;
		cin>>a>>b;
		
		if(vec[a-1][b])
		{
			
			v-=vec[a%2][b-1]+vec[a%2][b]+vec[a%2][b+1];
			
			vec[a-1][b]--;
		}
		else
		{
			
			v+=vec[a%2][b-1]+vec[a%2][b]+vec[a%2][b+1];
			
			vec[a-1][b]++;
			
		}
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}
	


}
