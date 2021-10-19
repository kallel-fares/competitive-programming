/*
 * Codeforces 1546A - AquaMoon and Two Arrays
 * Rating: 800 | Tags: brute force, greedy
 * Problem:    https://codeforces.com/problemset/problem/1546/A
 * Submission: https://codeforces.com/contest/1546/submission/132435916
 * Solved: 2021-10-19 (VIRTUAL)
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
		vector<int> vec1(n),vec2(n);
		
		vector<pair<int,int>> ans;
		
		int sum1=0,sum2=0,s=0;
		for(int i=0;i<n;i++)
		{
			cin>>vec1[i];
			sum1+=vec1[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>vec2[i];
			sum2+=vec2[i];
		}
		//cout<<"jhi";
		
		if(sum1!=sum2)
		{
			cout<<"-1\n";
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				while(vec1[i]<vec2[i])
				{
					for(int j=i+1;j<n;j++)
					{
						if(vec1[j]>vec2[j])
						{
							ans.pb(make_pair(j+1,i+1));
							vec1[i]++;
							vec1[j]--;
							//j--;
							break;
							
						}
					}
					
					
				}
				
				while(vec1[i]>vec2[i])
				{
					for(int j=i+1;j<n;j++)
					{
						if(vec1[j]<vec2[j])
						{
							ans.pb(make_pair(i+1,j+1));
							vec1[i]--;
							vec1[j]++;
							//j--;
							break;
						}
					}
					
				}
				
				
			}
			cout<<ans.size()<<"\n";
			for(auto x:ans)
			{
				cout<<x.first<<" "<<x.second<<"\n";
			}
			
			
		
		}
		
	
	}


}
