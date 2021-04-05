/*
 * Codeforces 1046C - Space Formula
 * Rating: 1400 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1046/C
 * Submission: https://codeforces.com/contest/1046/submission/112109089
 * Solved: 2021-04-05 (PRACTICE)
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
	
	int n,pos;
	cin>>n>>pos;
	vector<int> vec,vec1;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		vec.pb(a);
	}
	
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		vec1.pb(a);
	}
	
	int aux=vec[pos-1]+vec1[0],l=1,r=n-1,ans=0;
	
	for(int i=0;i<=pos-1;i++)
	{
		if(aux<vec[i]+vec1[r])
		{
			ans++;
			l++;
		}
		else
		{
			r--;
		}
	}	
	cout<<ans+1<<"\n";


}
