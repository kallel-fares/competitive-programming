/*
 * Codeforces 1353C - Board Moves
 * Rating: 1000 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1353/C
 * Submission: https://codeforces.com/contest/1353/submission/80126270
 * Solved: 2020-05-14 (CONTESTANT)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=35;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n;
		cin>>n;
		
		ll j=n;
		ll s=0;
		for(int i=n/2;i>=1;i--)
		{
			s+=i*(4*(j-1));
			//cout<<s<<" ";
			j-=2;
		}
		
		cout<<s<<"\n";
	}

}
