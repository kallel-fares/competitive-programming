/*
 * Codeforces 1304C - Air Conditioner
 * Rating: 1500 | Tags: dp, greedy, implementation, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1304/C
 * Submission: https://codeforces.com/contest/1304/submission/134683279
 * Solved: 2021-11-08 (PRACTICE)
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

struct cmp
{
    bool operator ()(const vector<ll> &a, const vector<ll> &b)
    {
        return a[1]<b[1];
        
    }
};


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int n,m;
		cin>>n>>m;
		ll mini=m,maxi=m,flag=0;
		int v=0;
		
		for(int i=0;i<n;i++)
		{
			ll a,b,c;
			cin>>a>>b>>c;
			
			ll dift=a-flag;
			if(mini-dift>c || maxi+dift<b)
				v=1;
			
			mini=max(mini-dift,b);
			maxi=min(maxi+dift,c);
			flag=a;
			
		
		}
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}


}
