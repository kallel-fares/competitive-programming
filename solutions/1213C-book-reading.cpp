/*
 * Codeforces 1213C - Book Reading
 * Rating: 1200 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1213/C
 * Submission: https://codeforces.com/contest/1213/submission/97592512
 * Solved: 2020-11-03 (PRACTICE)
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
		set <int> s;
		ll n,m,sum=0;
		cin>>n>>m;
		
		int i=0;
		while(!s.count((i*m)%10))
		{
			sum+=(i*m)%10;
			s.insert((i*m)%10);
			i++;
		}
		
		ll mem=n/m,ans=0;
		
		ans=(mem/s.size())*sum;
		for(int i=1;i<=mem%s.size();i++)
		{
			ans+=(m*i)%10;
		}
		
		cout<<ans<<"\n";
		
	}


}
