/*
 * Codeforces 1093C - Mishka and the Last Exam
 * Rating: 1300 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1093/C
 * Submission: https://codeforces.com/contest/1093/submission/107720320
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
	int n;
	cin>>n;
	vector<ll> vec(n),ans(n);
	
	for(int i=0;i<n/2;i++)
		cin>>vec[i];
	
	
	ans[0]=0;
	ans[n-1]=vec[0];
	
	ll mini=vec[0];
	
	ll j=0;
	for(int i=1;i<n/2;i++)
	{
		
		ans[i]=0;
		ans[n-i-1]=vec[i];
			
		
		if(ans[i]<ans[i-1])
		{
			ans[n-i-1]-=ans[i-1]-ans[i];
			ans[i]=ans[i-1];
		}
		
		if(ans[n-i]<ans[n-i-1])
		{
			ans[i]+=ans[n-i-1]-ans[n-i];
			ans[n-i-1]=ans[n-i];
		}
	}

	for(auto x:ans)
		cout<<x<<" ";
		
	


}
