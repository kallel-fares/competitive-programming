/*
 * Codeforces 1501B - Napoleon Cake
 * Rating: 900 | Tags: dp, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1501/B
 * Submission: https://codeforces.com/contest/1501/submission/110836825
 * Solved: 2021-03-23 (VIRTUAL)
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
		cin>>n;
		vector<int> vec(n),ans(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		int cream=0;
		for(int i=n-1;i>=0;i--)
		{
			cream=max(cream,vec[i]);
			if(cream)
			{
				ans[i]=1;
				cream--;
			}
			
		}
		for(auto x:ans)
		{
			cout<<x<<" ";
		}
		cout<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
