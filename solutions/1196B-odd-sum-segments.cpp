/*
 * Codeforces 1196B - Odd Sum Segments
 * Rating: 1200 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1196/B
 * Submission: https://codeforces.com/contest/1196/submission/100705289
 * Solved: 2020-12-08 (PRACTICE)
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
	testc
	{
		int n,k,tab[N];
		ll v=0;
		vector <int> vect;
		cin>>n>>k;
		memset(tab,0,4*(n+1));
		
		for(int i=0;i<n;i++)cin>>tab[i];
		for(int i=0;i<n;i++)
		{
			if(vect.size()+1<k)
			{
				while(!(tab[i]&1))
				{
					i++;
				}
				if(i<n)
				{
					vect.pb(i+1);
				}
			}
			else
			{
				v+=tab[i];
			}
			
				
		}
		
		if(vect.size()+v%2==k)
		{
			cout<<"YES\n";
			for(auto x:vect)
				cout<<x<<" ";
			cout<<n<<"\n";
		}
		else
		{
			cout<<"NO\n";
		}
		
	
	}


}
