/*
 * Codeforces 1257C - Dominated Subarray
 * Rating: 1200 | Tags: greedy, implementation, sortings, strings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1257/C
 * Submission: https://codeforces.com/contest/1257/submission/97582825
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

const int N=2e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,tab[N]={0},freq[N]={0};
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		int j=0,ans=n+1;
		for(int i=0;i<n;i++)
		{
			freq[tab[i]]++;
			while(freq[tab[i]]==2)
			{
				ans=min(ans,i-j+1);
				freq[tab[j]]--;
				j++;
			}
			
			
		}
		if(ans>n)
		{
			cout<<"-1\n";
		}	
		else
		{
			cout<<ans<<"\n";
		}
			
	}


}
