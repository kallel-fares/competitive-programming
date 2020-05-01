/*
 * Codeforces 1348A - Phoenix and Balance
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1348/A
 * Submission: https://codeforces.com/contest/1348/submission/78748715
 * Solved: 2020-05-01 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int rec(int n,int po,int s1,int s2)
{
	if(po==n)
		return 1;
	return min(rec(n,po+1,s1+1<<po,s2),rec(n,po+1,s1,s2+1<<po));
}

int main ()
{
	int n;
	testc
	{
		cin>>n;
		
		//cout<<(1<<n);
		
		int ans=(1<<n)+(1<<(n/2))-2-((1<<n)-(1<<n/2));
		cout<<ans<<"\n";
		
	}


}
