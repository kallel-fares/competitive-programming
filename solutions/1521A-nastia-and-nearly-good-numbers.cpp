/*
 * Codeforces 1521A - Nastia and Nearly Good Numbers
 * Rating: 1000 | Tags: constructive algorithms, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1521/A
 * Submission: https://codeforces.com/contest/1521/submission/121899884
 * Solved: 2021-07-10 (PRACTICE)
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
		ll a,b;
		cin>>a>>b;
		
		if(b==1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			cout<<a<<" "<<b*a<<" "<<(b+1)*a<<"\n";
		}
		
	
	}


}
