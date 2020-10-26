/*
 * Codeforces 1436B - Prime Square
 * Rating: 900 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1436/B
 * Submission: https://codeforces.com/contest/1436/submission/96765843
 * Solved: 2020-10-26 (PRACTICE)
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



int isprime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}




int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,tab[100]={101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199},val=0;
		cin>>n;
		
		for(int i=0;i<21;i++)
		{
			if(!isprime(tab[i]-n+1))
			{
				val=tab[i]-n+1;
				break;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					cout<<val<<" ";
				}
				else
					cout<<"1 ";
			}
			cout<<"\n";
		}
		
		cout<<"\n";
	}


}
