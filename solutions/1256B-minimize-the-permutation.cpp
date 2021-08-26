/*
 * Codeforces 1256B - Minimize the Permutation
 * Rating: 1400 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1256/B
 * Submission: https://codeforces.com/contest/1256/submission/127049771
 * Solved: 2021-08-26 (PRACTICE)
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
		vector<int> vec(n);
		vector<int> check(n);
		for(int i=0;i<n;i++)
			cin>>vec[i];
			
		for(int i=1;i<=n;i++)
		{
			
			for(int j=0;j<n;j++)
			{
				if(vec[j]==i)
				{
					int k;
					for(k=j-1;k>=0;k--)
					{
						
						if(!check[k])
						{
							int aux;
							aux=vec[k];
							vec[k]=vec[k+1];
							vec[k+1]=aux;
							check[k]++;
						}
						else
						{
							
							break;
						}
						
					}
					check[k+1]++;
				}
			}
				
		}
		
		for(auto x:vec)
			cout<<x<<" ";
		cout<<"\n";
			
			
	}


}
