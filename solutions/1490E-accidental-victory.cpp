/*
 * Codeforces 1490E - Accidental Victory
 * Rating: 1400 | Tags: binary search, data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1490/E
 * Submission: https://codeforces.com/contest/1490/submission/108333132
 * Solved: 2021-02-23 (PRACTICE)
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

bool comp(tuple<int,int,int> a, tuple<int,int,int> b) {
	return get<1>(a)<get<1>(b);
	
		
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int n;
		cin>>n;
		vector<tuple<int,int,int>> vec;
		
		
		ll s=0,v=1;
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			vec.pb(make_tuple(a,i+1,0));
			s+=a;
		}
		
		sort(vec.begin(),vec.end());
		
		get<2>(vec[n-1])=1;
		s-=get<0>(vec[n-1]);
		for(int i=n-2;i>=0;i--)
		{
			if(s>=get<0>(vec[i+1]))
			{
				get<2>(vec[i])=1;
				s-=get<0>(vec[i]);
				v++;
			}	
			else
				break;
		}
		
		
		
		sort(vec.begin(),vec.end(),comp);
		
		cout<<v<<"\n";
		for(auto x:vec)
		{
			if(get<2>(x))
				cout<<get<1>(x)<<" ";
		}
		cout<<"\n";
		
		
	}


}
