/*
 * Codeforces 1506C - Double-ended Strings
 * Rating: 1000 | Tags: brute force, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1506/C
 * Submission: https://codeforces.com/contest/1506/submission/111047578
 * Solved: 2021-03-25 (CONTESTANT)
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
		string a,b;
		cin>>a>>b;
		int a1=a.size(),b1=b.size(),maxi=0;
		
		
		map<string,int> freq;
		for(int i=0;i<a1;i++)
		{
			
			for(int j=i;j<a1;j++)
			{
				string aux;
				int v=0;
				for(int k=i;k<=j;k++)
				{
					aux+=a[k];
					v++;
				}
				//cout<<aux<<" ";
				freq[aux]=v;
				
			}
			
		}
		
		for(int i=0;i<b1;i++)
		{
		
			for(int j=i;j<b1;j++)
			{
				string aux;
				int v=0;
				for(int k=i;k<=j;k++)
				{
					aux+=b[k];
					v++;
				}
				maxi=max(maxi,freq[aux]);
			}
			
		}
		
		cout<<a1+b1-2*maxi<<"\n";
		//memset(tab,0,4*(n+1));
	
	}


}
