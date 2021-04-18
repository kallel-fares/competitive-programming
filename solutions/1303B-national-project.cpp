/*
 * Codeforces 1303B - National Project
 * Rating: 1400 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1303/B
 * Submission: https://codeforces.com/contest/1303/submission/113416149
 * Solved: 2021-04-18 (PRACTICE)
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
		ll n,g,b,ans=0;
		cin>>n>>g>>b;
		if(g>=b)
			cout<<n<<"\n";
		else
		{
			ll aux=n/2+n%2;
			ll aux1=aux/g+min((ll)1,aux%g);
			ans=aux+(aux1-1)*b;
			cout<<max(ans,n)<<"\n";
		}
	
	}


}
