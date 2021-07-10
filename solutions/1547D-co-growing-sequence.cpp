/*
 * Codeforces 1547D - Co-growing Sequence
 * Rating: 1300 | Tags: bitmasks, constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1547/D
 * Submission: https://codeforces.com/contest/1547/submission/121996649
 * Solved: 2021-07-10 (CONTESTANT)
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
		vector<int> vec;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			vec.pb(a);
		}
		
		cout<<"0 ";
		for(int i=1;i<n;i++)
		{
			int ans=0;
			for(ll j=0;j<=30;j++)
			{
				ll aux=1LL<<j;
				if((vec[i-1]&aux)==aux && ((vec[i]&aux)==0))
				{
					//cout<<"hi";
					ans^=((ll)1<<j);
				}
			}
			cout<<ans<<" ";
			vec[i]^=ans;
		}
		cout<<"\n";
	}


}
