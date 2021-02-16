/*
 * Codeforces 1490B - Balanced Remainders
 * Rating: 1000 | Tags: brute force, constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1490/B
 * Submission: https://codeforces.com/contest/1490/submission/107566096
 * Solved: 2021-02-16 (CONTESTANT)
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
		int n;
		cin>>n;
		vector<int> vec(n);
		vector<int> freq(3);
		
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			freq[a%3]++;
		}
		
		int eq=n/3;
		int ans=0;
	
		for(int j=0;j<=1;j++)
			for(int i=0;i<=2;i++)
			{
				//cout<<freq[i]<<" ";
				ans+=max(0,freq[i]-eq);
				freq[(i+1)%3]+=max(0,freq[i]-eq);
				
				freq[i]-=max(0,freq[i]-eq);
				
			}
	
		cout<<ans<<"\n";
		//memset(tab,0,4*(n+1));
	
	}


}
