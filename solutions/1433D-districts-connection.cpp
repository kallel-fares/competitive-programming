/*
 * Codeforces 1433D - Districts Connection
 * Rating: 1200 | Tags: constructive algorithms, dfs and similar
 * Problem:    https://codeforces.com/problemset/problem/1433/D
 * Submission: https://codeforces.com/contest/1433/submission/96152414
 * Solved: 2020-10-20 (CONTESTANT)
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
	testc
	{
		stack <int> s;
		int n,tab[N]={0},v=1,aux=0;
		cin>>n;
		cin>>tab[0];
		for(int i=1;i<n;i++)
		{
			
			cin>>tab[i];
			if(tab[i]==tab[0]) v++;
		}
		if(v==n)
		{
			cout<<"NO\n";
			continue;
		}
		
		
		cout<<"YES\n";
		int thing=tab[0];
		
		for(int i=1;i<n;i++)
		{
			if(tab[i]!=thing)
			{
				cout<<"1 "<<i+1<<"\n";
				aux=i+1;
			}
			else
			{
				s.push(i);
			}
			
		}
		while(!s.empty())
		{
			cout<<aux<<" "<<s.top()+1<<"\n";
			s.pop();
		}
		
		
	}

}
