/*
 * Codeforces 1443C - The Delivery Dilemma
 * Rating: 1400 | Tags: binary search, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1443/C
 * Submission: https://codeforces.com/contest/1443/submission/108527291
 * Solved: 2021-02-26 (PRACTICE)
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
		ll maxi=0,ans=1<<30,sum=0;
		cin>>n;
		vector<ll>vec(n);
		vector<pair<ll,ll>>aux;
		
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			aux.pb(make_pair(vec[i],a));
		}
		sort(aux.begin(),aux.end(),greater<pair<ll,ll>>());
		
		/*for(auto x:aux)
		{
			cout<<x.first<<" "<<x.second<<"\n";
		}
		cout<<"\n";*/
		
		for(auto x:aux)
		{
			ans=min(ans,max(x.first,sum));
			sum+=x.second;
		}
		
		cout<<min(sum,ans)<<"\n";
	}


}
