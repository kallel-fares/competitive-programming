/*
 * Codeforces 1465B - Fair Numbers
 * Rating: 1000 | Tags: brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1465/B
 * Submission: https://codeforces.com/contest/1465/submission/101915797
 * Solved: 2020-12-20 (PRACTICE)
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

int check(ll n)
{
	map<int,int> m;
	ll aux=n;
	int i=0;
	while(aux!=0)
	{
		i++;
		if(aux%10!=0)
			if(n%(aux%10)!=0)
				return 0;
		aux/=10;
	}
	//cout<<n<<" ";
	
		
	return 1;
	
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		ll n;
		map <int,int> m;
		cin>>n;
		
		
		//cout<<n%8<<" ";
		//cout<<check(n,m);
		while(!check(n))
		{
			n++;
		}
		cout<<n<<"\n";
		
		/*for(auto x:m)
			cout<<x.first<<" ";
			*/
		//cout<<"\n";
		
	}


}
