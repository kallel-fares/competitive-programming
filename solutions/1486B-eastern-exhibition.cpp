/*
 * Codeforces 1486B - Eastern Exhibition
 * Rating: 1500 | Tags: binary search, geometry, shortest paths, sortings
 * Problem:    https://codeforces.com/problemset/problem/1486/B
 * Submission: https://codeforces.com/contest/1486/submission/107807404
 * Solved: 2021-02-18 (CONTESTANT)
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
		int n,v=0;
		cin>>n;
		vector<ll> vec1,vec2;
		for(int i=0;i<n;i++)
		{
			ll a,b;
			cin>>a>>b;
			vec1.pb(a);
			vec2.pb(b);
		}
		
		sort(vec1.begin(),vec1.end());
		sort(vec2.begin(),vec2.end());
		
		
		ll ans1=1,ans2=1;
		//cout<<vec1.size()<<" "<<vec2.size()<<" ";
		if(vec1.size()%2==0)
		{
			
			ans1=vec1[n/2]-vec1[n/2-1]+1;
		}
		
		if(vec2.size()%2==0)
		{
				
			ans2=vec2[n/2]-vec2[n/2-1]+1;
			
		}
		
		cout<<ans1*ans2<<"\n";
		
	
	}


}
