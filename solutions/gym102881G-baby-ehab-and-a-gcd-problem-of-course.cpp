/*
 * Codeforces gym102881G - Baby Ehab and a GCD Problem, Of Course
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102881/problem/G
 * Submission: https://codeforces.com/gym/102881/submission/102078558
 * Solved: 2020-12-22 (PRACTICE)
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
	
	
	freopen("gcd.in","r",stdin);
	
	int v=0;
	ll gc;
	
	
	int t;
	cin>>t;
	t--;
	ll a,b;
	cin>>a>>b;
	if(a!=b)
	{
		
		v=1;
		cout<<"1\n";		
	}
	else
	{
		
		gc=a;
		cout<<gc<<"\n";	
	}
	while(t--)
	{
		cin>>a>>b;
		if(a!=b)
			v=1;
		if(v)
		{
			cout<<"1\n";
			continue;
		}
		
		gc=__gcd(gc,a);
		cout<<gc<<"\n";
		
		
	}


}
