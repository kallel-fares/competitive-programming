/*
 * Codeforces 1454D - Number into Sequence
 * Rating: 1300 | Tags: constructive algorithms, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1454/D
 * Submission: https://codeforces.com/contest/1454/submission/99460556
 * Solved: 2020-11-24 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		ll n;
		int freq[N]={0};
		pair<int,int>maxi=make_pair(0,0);
		cin>>n;
		
		ll aux=n;
		for(ll i=2;i*i<=n;i++)
		{	
			
			while(aux%i==0)
			{
				freq[i]++;
				aux=aux/i;
			}
		}
		
		
		for(ll i=2;i*i<=n;i++)
		{
			//cout<<"i="<<i<<" "<<freq[i]<<" ";
			if(freq[i]>maxi.second)
			{
				maxi.first=i;
				maxi.second=freq[i];
			}
		}
		
		
		
		
		if(maxi.first==0)
		{
			cout<<"1\n"<<n<<"\n";
		}
		else
		{
			n=n/pow(maxi.first,maxi.second-1);
			cout<<maxi.second<<"\n";
			while(maxi.second>1)
			{
				cout<<maxi.first<<" ";
				maxi.second--;
			}
			cout<<n<<"\n";
		}
		
		
	}


}
