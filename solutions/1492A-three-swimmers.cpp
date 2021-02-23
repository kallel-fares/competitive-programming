/*
 * Codeforces 1492A - Three swimmers
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1492/A
 * Submission: https://codeforces.com/contest/1492/submission/108252284
 * Solved: 2021-02-23 (CONTESTANT)
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
		ll p,a,b,c,mini=1e18+9;
		cin>>p>>a>>b>>c;
			
		if(p>a)
		{
			a*=p/a+min((ll)1,p%a);
		}
		mini=min(mini,a-p);
		if(p>b)
		{
			b*=p/b+min((ll)1,p%b);
		}
		mini=min(mini,b-p);
		if(p>c)
		{
			c*=p/c+min((ll)1,p%c);
		}
		mini=min(mini,c-p);
		
		cout<<mini<<"\n";
	}


}
