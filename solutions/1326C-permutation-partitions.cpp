/*
 * Codeforces 1326C - Permutation Partitions
 * Rating: 1300 | Tags: combinatorics, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1326/C
 * Submission: https://codeforces.com/contest/1326/submission/108661696
 * Solved: 2021-02-28 (PRACTICE)
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

	ll n,k;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	
	ll ans1=((n*2-k+1)*k)/2,ans2=1;
	
	int i=0;
	while(vec[i]<n-k+1)
		i++;
		
	
	ll v=1,cnt=0;
	for(;i<n;i++)
	{
		if(vec[i]<n-k+1)
		{
			v++;
			
		}
		else
		{
			ans2=(ans2%998244353)*(v%998244353);
			ans2=ans2%998244353;
			v=1;
			cnt++;
		}
		if(cnt==k)
			break;
	}
	
	cout<<ans1<<" "<<ans2<<"\n";

}
