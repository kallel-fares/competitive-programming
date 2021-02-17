/*
 * Codeforces 1077C - Good Array
 * Rating: 1300 | Tags: none
 * Problem:    https://codeforces.com/problemset/problem/1077/C
 * Submission: https://codeforces.com/contest/1077/submission/107722566
 * Solved: 2021-02-17 (PRACTICE)
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
	ll n;
	cin>>n;
	ll sum=0;
	vector<int> vec(n),ans;
	vector<pair<int,int>> aux;
	
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		sum+=vec[i];
		aux.pb(make_pair(vec[i],i+1));
	}
	
	sort(aux.begin(),aux.end());
	/*for(int i=0;i<n-1;i++)
	{
	
		cout<<aux[i].first<<" ";
	}*/
	
	//cout<<aux[n-1].first<<" ";
	//cout<<sum<<"\n";
	for(int i=0;i<n-1;i++)
	{
		//cout<<sum-aux[i].first<<" "<<aux[n-1].first<<"\n";
		if(sum-aux[i].first-aux[n-1].first==aux[n-1].first)
		{
			ans.pb(aux[i].second);
		}	
	}
	
	if(sum-aux[n-1].first-aux[n-2].first==aux[n-2].first)
	{
		ans.pb(aux[n-1].second);
	}
	
	
	cout<<ans.size()<<"\n";
	for(auto x:ans)
	{
		cout<<x<<" ";
	}
	

}
