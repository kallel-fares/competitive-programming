/*
 * Codeforces 1473A - Replacing Elements
 * Rating: 800 | Tags: greedy, implementation, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1473/A
 * Submission: https://codeforces.com/contest/1473/submission/104285461
 * Solved: 2021-01-14 (CONTESTANT)
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
		int a,b,v=0;
		cin>>a>>b;
		
		vector<int> vect(a);
		for(int i=0;i<a;i++)
		{
		
			cin>>vect[i];	
			if(vect[i]<=b)
				v++;	
		}
		
		sort(vect.begin(),vect.end());
		
		if(v==a)
		{
			cout<<"YES\n";
			continue;
		}
		
		
		if(vect[0]+vect[1]<=b)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";	
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
