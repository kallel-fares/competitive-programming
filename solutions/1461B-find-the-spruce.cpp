/*
 * Codeforces 1461B - Find the Spruce
 * Rating: 1400 | Tags: brute force, dp, implementation
 * Problem:    https://codeforces.com/problemset/problem/1461/B
 * Submission: https://codeforces.com/contest/1461/submission/113132582
 * Solved: 2021-04-15 (PRACTICE)
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
		ll ans=0;
		cin>>n>>m;
		
		vector<string> vec(n);
		
		vector<int> data[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			for(int j=0;j<m;j++)
			{
				data[i].pb(0);
			}
		}
		
		
		for(int i=0;i<n;i++)
		{
			
			for(int j=0;j<m;j++)
			{
				if(vec[i][j]=='.')
					continue;
					
					
				int start=j;
				while(vec[i][j]=='*')
				{
					j++;
				}
				int cnt=1,aux=j-start;
				for(int k=0;k<aux/2+aux%2;k++)
				{
					data[i][start+k]=data[i][j-k-1]=cnt;
					cnt+=2;
				}
			}
		}
		
		/*for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<data[i][j]<<" ";
			}
			cout<<"\n";
		}*/
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(data[i][j]==0)
					continue;
				int cnt=0;
				
				while(data[i+cnt][j]>=cnt*2+1)
				{
					
					//cout<<vec[i+cnt][j]-'0'<<" "<<cnt*2+1<<"\n";
					ans++;
					cnt++;
					if(i+cnt>=n)
						break;
				}
				
				
			}
			//cout<<"\n";
		}
		
		cout<<ans<<"\n";		
				
		
		
		
	
	}


}
