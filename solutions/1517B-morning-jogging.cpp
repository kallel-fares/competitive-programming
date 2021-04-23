/*
 * Codeforces 1517B - Morning Jogging
 * Rating: 1200 | Tags: constructive algorithms, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1517/B
 * Submission: https://codeforces.com/contest/1517/submission/114007778
 * Solved: 2021-04-23 (CONTESTANT)
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
		int n,m;
		cin>>n>>m;
		
		map<int,int> freq[n];
		vector<int> vec;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int a;
				cin>>a;
				freq[i][a]++;
				vec.pb(a);
			}
		}
		
		//check this part later
		vector<vector<int>> ans;
		for(int i=0;i<n;i++)
		{
			vector<int> aux(m);
			ans.pb(aux);
		}
		
		sort(vec.begin(),vec.end());
		
		int v=0;
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(freq[j][vec[i]])
				{
					ans[j][i]=vec[i];
					freq[j][vec[i]]--;
					break;
				}
			}
		}
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(!ans[i][j])
				{
					for(auto x:freq[i])
					{
						if(x.second)
						{
							ans[i][j]=x.first;
							freq[i][x.first]--;
							break;
						}
					}
				}
			}
		}
		
		
		for(auto x:ans)
		{
			for(auto y:x)
				cout<<y<<" ";
			cout<<"\n";
		}
	
	}


}
