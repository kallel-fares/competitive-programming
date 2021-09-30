/*
 * Codeforces 1526A - Mean Inequality
 * Rating: 800 | Tags: constructive algorithms, sortings
 * Problem:    https://codeforces.com/problemset/problem/1526/A
 * Submission: https://codeforces.com/contest/1526/submission/130338252
 * Solved: 2021-09-30 (PRACTICE)
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
		
		vector<int> vec(2*n),ans(2*n);
		
		for(int i=0;i<2*n;i++)
			cin>>vec[i];
			
		sort(vec.begin(),vec.end());
		
		for(int i=0;i<n;i++)
		{
			ans[i*2]=vec[i];
		}
		int j=1;
		for(int i=n;i<2*n;i++)
		{
			ans[j]=vec[i];
			j+=2;
		}
		
		
		for(auto x:ans)
			cout<<x<<" ";
		cout<<"\n";
			
		
	}


}
