/*
 * Codeforces 1426C - Increase and Copy
 * Rating: 1100 | Tags: binary search, constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1426/C
 * Submission: https://codeforces.com/contest/1426/submission/94362860
 * Solved: 2020-09-30 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n;
		cin>>n;
		int aux=(int)sqrt(n);
		if((int)sqrt(n)==(int)ceil(sqrt(n)))
		{
			cout<<((int)sqrt(n)-1)*2<<"\n";
			continue;
		}
		if(aux*(aux+1)>=n)
			cout<<aux*2-1<<"\n";
		else
			cout<<aux*2<<"\n";
	}

}
