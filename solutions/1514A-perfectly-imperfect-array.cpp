/*
 * Codeforces 1514A - Perfectly Imperfect Array
 * Rating: 800 | Tags: math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1514/A
 * Submission: https://codeforces.com/contest/1514/submission/114394164
 * Solved: 2021-04-27 (VIRTUAL)
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
		
		int n,v=0;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			int aux=(int)sqrt(a);
			
			
			//cout<<(int)sqrt(a)*(int)sqrt(a)<<" "<<a<<"\n";
			if((int)sqrt(a)*(int)sqrt(a)!=a)
			{
				v=1;
			}
		}
		//cout<<(int)sqrt(100)*(int)sqrt(5)<<"\n";
		if(v)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	
	}


}
