/*
 * Codeforces 1476B - Inflation
 * Rating: 1300 | Tags: binary search, brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1476/B
 * Submission: https://codeforces.com/contest/1476/submission/107367886
 * Solved: 2021-02-14 (VIRTUAL)
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
		ll aux=0;
		vector<ll> vec(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		aux=vec[0];
		
		
		ll ans=0;
		for(int i=1;i<n;i++)
		{
			ans+=max((ll)ceil((double)(100*vec[i])/k)-aux,(ll)0);
			//cout<<max((int)ceil((float)(100*vec[i])/k)-aux,(ll)0)<<" ";
			aux+=max((ll)ceil((double)(100*vec[i])/k)-aux,(ll)0);
			aux+=vec[i];
		}
		cout<<ans<<"\n";
	}


}
