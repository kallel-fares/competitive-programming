/*
 * Codeforces 1100B - Build a Contest
 * Rating: 1300 | Tags: data structures, implementation
 * Problem:    https://codeforces.com/problemset/problem/1100/B
 * Submission: https://codeforces.com/contest/1100/submission/107275743
 * Solved: 2021-02-13 (PRACTICE)
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
	cin.tie(NULL),cout.tie(NULL);

	
	int n,m,mini=1e9+5;
	cin>>n>>m;
	
	
	string ans="";
	vector<int> vec(m);
	int freq[N]={0};
	
	for(int i=0;i<m;i++)
	{
		cin>>vec[i];
		freq[vec[i]]++;
	}
	
	for(int i=1;i<=n;i++)
	{
		mini=min(freq[i],mini);
	}
	
	for(int i=m-1;i>=0;i--)
	{
		freq[vec[i]]--;
		if(freq[vec[i]]<mini)
		{
			mini--;
			ans='1'+ans;
		}
		else
		{
			ans='0'+ans;
			
		}
	}
	
	
	cout<<ans;


}
