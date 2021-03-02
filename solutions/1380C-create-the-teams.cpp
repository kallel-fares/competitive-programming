/*
 * Codeforces 1380C - Create The Teams
 * Rating: 1400 | Tags: brute force, dp, greedy, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1380/C
 * Submission: https://codeforces.com/contest/1380/submission/108867698
 * Solved: 2021-03-02 (PRACTICE)
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
		ll n,x,ans=0;
		cin>>n>>x;
		vector<ll>vec(n);
		for(int i=0;i<n;i++)
			cin>>vec[i];
		
		sort(vec.begin(),vec.end());
		
		int v=1;
		for(int i=n-1;i>=0;i--)
		{
			if(vec[i]*v>=x)
			{
				ans++;
				v=1;
			}
			else
			{
				v++;
			}
		}
		cout<<ans<<"\n";
	
	}


}
