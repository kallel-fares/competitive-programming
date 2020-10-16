/*
 * Codeforces 1430C - Numbers on Whiteboard
 * Rating: 1000 | Tags: constructive algorithms, data structures, greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1430/C
 * Submission: https://codeforces.com/contest/1430/submission/95699149
 * Solved: 2020-10-17 (VIRTUAL)
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
	cout.tie(NULL);
	testc
	{
		int n;
		cin>>n;
		
		cout<<"2\n";
		if(n==2)
		{
			cout<<"1 2\n";
			continue;
		}
		cout<<n<<" "<<n-2<<"\n";
		cout<<n-1<<" "<<n-1<<"\n";
		int aux=n-1;
		while(aux!=2)
		{
			cout<<aux<<" "<<aux-2<<"\n";
			aux--;
		}
		
	}

}
