/*
 * Codeforces 1343B - Balanced Array
 * Rating: 800 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1343/B
 * Submission: https://codeforces.com/contest/1343/submission/77557032
 * Solved: 2020-04-21 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
const ll N=2e5+5;
int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	testc
	{
		map <int,int> tab;
		int n;
		cin>>n;
		if((n/2)&1)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES\n";
			for(int i=1;i<=n/2;i++)
			{
				cout<<i*2<<" ";
			}
			int j=3,start=1;
			for(int i=0;i<n/4;i++)
			{
				for(int k=start;k<j*2;k+=2)
				{
					if(!tab[k])
					{
						start=k;
						tab[k]=1;
						tab[j*2-k]=1;
						cout<<k<<" "<<j*2-k<<" ";
						break;
					}
				}
				j+=4;
			}
		}
		cout<<"\n";
	}


}
