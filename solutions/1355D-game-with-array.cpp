/*
 * Codeforces 1355D - Game With Array
 * Rating: 1400 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1355/D
 * Submission: https://codeforces.com/contest/1355/submission/80411978
 * Solved: 2020-05-16 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;



const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,s;
	cin>>n>>s;
	if(s-n-1>n-2)
	{
		cout<<"YES\n";
		for(int i=0;i<n-1;i++)cout<<"1 ";
		cout<<s-(n-1)<<"\n"<<n<<"\n";
	}
	else
		cout<<"NO\n";
	

}
