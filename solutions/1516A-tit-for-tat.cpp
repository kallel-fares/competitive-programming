/*
 * Codeforces 1516A - Tit for Tat
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1516/A
 * Submission: https://codeforces.com/contest/1516/submission/113724550
 * Solved: 2021-04-21 (CONTESTANT)
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
		int n,k;
		cin>>n>>k;
		
		vector<int> vec(n);
		
		for(int i=0;i<n;i++)
			cin>>vec[i];
		
		int val=0;
		for(int i=0;i<n-1;i++)
		{
			val+=min(vec[i],k);
			
			int aux=min(vec[i],k);
			vec[i]-=aux;
			k-=aux;
		}
		vec[n-1]+=val;
		
		for(auto x:vec)
			cout<<x<<" ";
		cout<<"\n";
	
	}


}
