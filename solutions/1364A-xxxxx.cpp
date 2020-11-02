/*
 * Codeforces 1364A - XXXXX
 * Rating: 1200 | Tags: brute force, data structures, number theory, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1364/A
 * Submission: https://codeforces.com/contest/1364/submission/97508528
 * Solved: 2020-11-02 (PRACTICE)
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
	testc
	{
		vector <int> vec;
		int n,x,a,v=0,div=0;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v+=a;
			if(a%x==0)
				div++;
			else
			{
				vec.pb(i);
			}
			
		}
		if(div==n)
		{
			cout<<"-1\n";
			continue;
		}
		if(v%x!=0)
		{
			cout<<n<<"\n";
		}
		else
			cout<<n-min(vec[0]+1,n-vec[vec.size()-1])<<"\n";
	
	}


}
