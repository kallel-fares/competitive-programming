/*
 * Codeforces 1352C - K-th Not Divisible by n
 * Rating: 1200 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1352/C
 * Submission: https://codeforces.com/contest/1352/submission/100263685
 * Solved: 2020-12-03 (PRACTICE)
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	

	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		
		long long ans=k;
		int v=0;
		while(ans!=ans+ans/n-v)
		{
			int aux=ans/n;
			ans=ans+ans/n-v;
			v=aux;
			
		}
		cout<<ans<<"\n";
		
		//
		
	}
}
