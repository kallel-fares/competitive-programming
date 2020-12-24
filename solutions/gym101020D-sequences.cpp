/*
 * Codeforces gym101020D - Sequences
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101020/problem/D
 * Submission: https://codeforces.com/gym/101020/submission/102259924
 * Solved: 2020-12-24 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		
		int n,freq[N]={0},maxi=0;
		cin>>n;
		
		
		int v=1,ans=1;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			maxi=max(maxi,a);
			if(freq[a-1])
			{
				if(freq[a]<freq[a-1]+1)
				{
					freq[a]=freq[a-1]+1;
					ans=max(ans,freq[a]);
					freq[a-1]=0;
				}
					
			}
			else
			{
				if(!freq[a])
				{
					freq[a]++;
				}
			}
			
				
		}
		//cout<<maxi<<" ";
		
		
		
		cout<<ans<<"\n";
	}


}
