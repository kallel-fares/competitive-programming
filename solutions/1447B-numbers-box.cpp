/*
 * Codeforces 1447B - Numbers Box
 * Rating: 1000 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1447/B
 * Submission: https://codeforces.com/contest/1447/submission/105259515
 * Solved: 2021-01-25 (PRACTICE)
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
		int n,m,mini=101,ans=0,cnt=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int a;
				cin>>a;
				mini=min(mini,abs(a));
				if(a<0)
					cnt++;
				ans+=abs(a);
			}
		}
		
		if(cnt&1)
			cout<<ans-2*mini;
		else
			cout<<ans;
		cout<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
