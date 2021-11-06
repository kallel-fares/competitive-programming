/*
 * Codeforces 1313C1 - Skyscrapers (easy version)
 * Rating: 1500 | Tags: brute force, data structures, dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1313/C1
 * Submission: https://codeforces.com/contest/1313/submission/134518684
 * Solved: 2021-11-06 (PRACTICE)
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


pair<ll,vector<int>> som(vector<int> vec ,int a,int n)
{
	
	ll aux=vec[a],ans=0;
	vector<int> vecaux(n);
	for(int i=a;i<n;i++)
	{
		vecaux[i]=min(aux,(ll)vec[i]);
		aux=vecaux[i];
		ans+=aux;
	}
	
	aux=vec[a];
	for(int i=a-1;i>=0;i--)
	{
		vecaux[i]=min(aux,(ll)vec[i]);
		aux=vecaux[i];
		ans+=aux;
	}
	return make_pair(ans,vecaux);
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> vec(n),ans;
	for(int i=0;i<n;i++)
		cin>>vec[i];
		
	ll maxi=0;
	for(int i=0;i<n;i++)
	{
		pair<ll,vector<int>> p=som(vec,i,n);
		if(p.first>maxi)
		{
			maxi=p.first;
			ans=p.second;
		}
		
	}
	
	for(auto x:ans)
		cout<<x<<" ";
	

}
