/*
 * Codeforces 1494B - Berland Crossword
 * Rating: 1400 | Tags: bitmasks, brute force, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1494/B
 * Submission: https://codeforces.com/contest/1494/submission/109002197
 * Solved: 2021-03-03 (PRACTICE)
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
		int n,ans=0,v=0,aux=0;
		vector<int> vec(4),vec1(4);
		cin>>n;
		
		for(int i=0;i<4;i++)
		{
			cin>>vec[i];
		}
		
		for(int i=0;i<16;i++)
		{
			for(int j=0;j<4;j++)
			{
				vec1[j]=vec[j];
			}
			
			
			for(int j=0;j<4;j++)
			{
				aux=1<<j;
				//cout<<(i&aux)<<" ";
				if(i&aux)
				{
					vec1[j]--;
					vec1[(j+1)%4]--;		
				}
			}
			//cout<<"\n";
			v=0;
			for(auto x:vec1)
			{
				//cout<<x<<" ";
				if(x>=0 && x<=n-2)
					v++;
			}
			if(v==4)
				ans=1;
			//cout<<"\n";
			
		}
		
		if(ans)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}


}
