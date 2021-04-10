/*
 * Codeforces 1312C - Adding Powers
 * Rating: 1400 | Tags: bitmasks, greedy, implementation, math, number theory, ternary search
 * Problem:    https://codeforces.com/problemset/problem/1312/C
 * Submission: https://codeforces.com/contest/1312/submission/112463527
 * Solved: 2021-04-10 (PRACTICE)
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
		ll n,k;
		cin>>n>>k;
		
		
		map<int,int> freq;
		ll sum=0;
		int v=0;
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			vector<int> aux;
			
			int j=0;
			while(a)
			{
				if(a%k)
				{
					freq[j]+=a%k;
					if(freq[j]>1)
					{
						v=1;
					}
				}
				j++;
				a/=k;
			}
			

		}
		
		/*for(auto x:freq)
			cout<<x.first<<" "<<x.second<<"\n";*/
		
		
		if(v)
		{
			cout<<"NO\n";
		}
		else
			cout<<"YES\n";
	
	
	}


}
