/*
 * Codeforces 1467A - Wizard of Orz
 * Rating: 900 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1467/A
 * Submission: https://codeforces.com/contest/1467/submission/103753042
 * Solved: 2021-01-08 (CONTESTANT)
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
		int n;
		cin>>n;
		string ch="9012345678";
		
		
		if(n==1)
		{
			cout<<"9\n";
			continue;
		}
		
		cout<<"98";
		for(int i=0;i<n-2;i++)
		{
			cout<<ch[i%10];
		}
		cout<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
