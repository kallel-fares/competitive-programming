/*
 * Codeforces 1517C - Fillomino 2
 * Rating: 1400 | Tags: constructive algorithms, dfs and similar, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1517/C
 * Submission: https://codeforces.com/contest/1517/submission/114064275
 * Solved: 2021-04-24 (PRACTICE)
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

/*bool rec(int i,int j,int val,int rep,vector<vector<int>>& ans)
{
	
	cout<<i<<" "<<j<<" "<<rep<<"\n";
	if(rep<0)
		return true;
	if(i<0 || i>=ans[0].size() || j<0 || j>=ans[0].size())
	{
		
		return false;
	}
	
	
	cout<<"valid1\n";
	
	if(ans[i][j] && i!=j)
		return false;
	
	cout<<"valid2\n";
	ans[i][j]=val;
	
	if(rec(i,j-1,val,rep-1,ans))
	else
		rec(i+1,j,val,rep-1,ans);
	
}

*/

int main ()
{
	

	//freopen("","r",stdin);
	
	int n;
	cin>>n;
	
	vector<vector<int>> ans;
	
	for(int i=0;i<n;i++)
	{	
		vector<int> aux(n);
		ans.pb(aux);
		cin>>ans[i][i];	
	}
		
		
	for(int k=0;k<n;k++)
	{
		int v=ans[k][k];
		int i=k,j=k;
		
		int aux=v-1;
		while(aux)
		{
			if(j-1>=0)
			{
				if(!ans[i][j-1])
				{
					ans[i][j-1]=v;
					j--;
				}
				else
				{
					if(i+1<=n-1)
					{
						if(!ans[i+1][j])
						{
							ans[i+1][j]=v;
							i++;
						}		
					}
				}
				
			}
			else
			{
				if(i+1<=n-1)
				{
					if(!ans[i+1][j])
					{
						ans[i+1][j]=v;
						i++;
					}		
				}
			}
			aux--;
			
			
			
			
		}
		
		
	}
		
		
		
		
		
		
		
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
		
	
		
	
	


}
