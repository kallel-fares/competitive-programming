/*
 * Codeforces 631B - Print Check
 * Rating: 1200 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/631/B
 * Submission: https://codeforces.com/contest/631/submission/100769163
 * Solved: 2020-12-09 (PRACTICE)
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
	
	
	
	int n,m,k,ans[5005][5005];
	//int tab[5005][5];
	//pair<int,int> dab[10];
	//map<pair<int,int>,int,hash_pair>d;
	pair<ll,int> mat[3][5005];
	//cout<<d[make_pair(1,1)]<<" ";
	
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++)
	{
		int a,b;
		ll c;
		cin>>a>>b>>c;
		mat[a][b]=make_pair(c,i);
		//d[make_pair(a,b)]=c;
	}
	
	
	
	/*
	for(int i=k-1;i>=0;i--)
	{
		if(tab[i][0]==1 && mat[tab[i][0]][tab[i][1]]!=INF)
		{
			for(int l=0;l<m;l++)
			{
				if(ans[tab[i][l]])
				ans[b-1][l]=tab;
			}
			
		}
		else
		{
			for(int l=0;l<n;l++)
			{
				ans[l][b-1]=c;
			}
		}
	}
	*/
	/*
	for(int i=0;i<3;i++)
	{
	    cout<<mat[0][i].first<<" ";
	    cout<<mat[1][i].first<<"\n";
	    
	}
	*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mat[1][i+1].second>=mat[2][j+1].second)
				cout<<mat[1][i+1].first<<" ";
			else
				cout<<mat[2][j+1].first<<" ";
		}
		cout<<"\n";
	}
	
	
	
	
	
	


}
