/*
 * Codeforces gym1028921 - Unique Elements
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102892/problem/1
 * Submission: https://codeforces.com/gym/102892/submission/101590544
 * Solved: 2020-12-17 (PRACTICE)
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
	
	
	map <int,int> m;
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		m[a]++;
	}
	
	for(auto x:m)
	{
		//cout<<x.first<<" ";
		if(x.second==1)
			ans++;
	}
	cout<<ans<<"\n";


}
