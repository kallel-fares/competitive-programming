/*
 * Codeforces 1420C1 - Pokémon Army (easy version)
 * Rating: 1300 | Tags: constructive algorithms, dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1420/C1
 * Submission: https://codeforces.com/contest/1420/submission/104519969
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
		int n,q;
		cin>>n>>q;
		
		
		int vect[N][2];
		
		for(int i=0;i<n;i++)
		{
			cin>>vect[i][0];
		}
		
		if(n==1)
		{
			cout<<vect[0][0]<<"\n";
			continue;
		}
		
		for(int i=1;i<n;i++)
		{
			if(vect[i-1][0]<vect[i][0])
			{
				vect[i][1]=1;
			}
			else
			{
				vect[i][1]=0;				
			} 
		}
		
		vect[0][1]=(vect[1][1]+1)%2;
		vect[n][1]=(vect[n-1][1]+1)%2;
		
		vector<int> vec;
		//vec.pb(vect[0][0]);
		for(int i=0;i<n;i++)
		{
			while(vect[i][1]==vect[i+1][1])
			{
				i++;
			}	
			vec.pb(vect[i][0]);	
			//cout<<vect[i][0]<<" ";
		}
		
		if(vec.size()==1)
		{
			cout<<vec[0]<<"\n";
			continue;
		}
		
		
		int be=0,en=vec.size(),v=0;
		ll ans=0;
		if(vec[0]<vec[1])
			be=1;
		//cout<<vec.size();
		
		
		
		if(vec[vec.size()-1]<vec[vec.size()-2])
			en=vec.size()-1;
		for(int i=be;i<en;i++)
		{
			if(!v)
			{
				ans+=vec[i];
			}
			else
			{
				ans-=vec[i];
			}
			v=(v+1)%2;
			
		}
		 
		
		
		
		
		/*int beg,en;
		if(!vect[0][1])
			beg=1;
		if(!vect[n-1][1])
			end=n-2;
		
		ll ans=0,v=0;;
		for(int i=beg;i<en;i++)
		{
			if(!v)
				ans+=vect[i][0]
		}*/
		cout<<ans<<"\n";
	
	}


}
