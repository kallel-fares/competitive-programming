/*
 * Codeforces 1422B - Nice Matrix
 * Rating: 1300 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1422/B
 * Submission: https://codeforces.com/contest/1422/submission/104491070
 * Solved: 2021-01-16 (PRACTICE)
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
		int m,n;
		
		
		cin>>n>>m;
		
		vector<int> vect[n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int a;
				cin>>a;
				vect[i].pb(a);
			}
		}
		
		ll ans=0;
		for(int i=0;i<n/2+n%2;i++)
		{
			for(int j=0;j<m/2+m%2;j++)
			{
				vector<int> aux_vec;
			
				aux_vec.pb(vect[i][j]);
				if(n-i-1!=i)
					aux_vec.pb(vect[n-i-1][j]);
				if(m-j-1!=j)
					aux_vec.pb(vect[i][m-j-1]);
				if(i!=n-i-1 && j!=m-j-1)
					aux_vec.pb(vect[n-i-1][m-j-1]);
				
				sort(aux_vec.begin(),aux_vec.end());
				
				int aux=aux_vec[aux_vec.size()/2];
				
				for(auto x:aux_vec)
				{
					//cout<<abs(x-aux)<<" ";
					ans+=abs(x-aux);
				}
			}
		}
		
		cout<<ans<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
