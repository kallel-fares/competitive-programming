/*
 * Codeforces gym100155D - Kids Love Candies
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100155/problem/D
 * Submission: https://codeforces.com/gym/100155/submission/110154197
 * Solved: 2021-03-17 (VIRTUAL)
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

	
	int n,k,ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		ans+=a/k;
	}
	cout<<ans;

}
