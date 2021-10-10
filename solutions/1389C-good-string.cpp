/*
 * Codeforces 1389C - Good String
 * Rating: 1500 | Tags: brute force, dp, greedy, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1389/C
 * Submission: https://codeforces.com/contest/1389/submission/131487876
 * Solved: 2021-10-10 (PRACTICE)
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
		string ch;
		
		map<char,int> freq;
		
		cin>>ch;
		
		
		int n=ch.size();
		int ans=0;
		for(int i=0;i<n;i++)
			freq[ch[i]]++;
			
		for(auto x:freq)
			ans=max(ans,x.second);
			
		for(int i=0;i<10;i++)
		{
			for(int j=i+1;j<10;j++)
			{
				int s=0,v=0;
				char a=(char)('0'+i),b=(char)('0'+j);
				
				for(int k=0;k<n;k++)
				{
					if(v)
					{
						if(ch[k]==a)
						{
							s++;
							v=(v+1)%2;
						}
						
					}
					else
					{
						if(ch[k]==b)
						{
							s++;
							v=(v+1)%2;
						}
						
					}
				}
				if(v)
					s--;
				ans=max(ans,s);
				s=0;
				v=1;
				for(int k=0;k<n;k++)
				{
					if(v)
					{
						if(ch[k]==a)
						{
							s++;
							v=(v+1)%2;
						}
						
					}
					else
					{
						if(ch[k]==b)
						{
							s++;
							v=(v+1)%2;
						}
						
					}
				}
				
				if(!v)
					s--;
				ans=max(ans,s);
				
			}
		}
		
		cout<<n-ans<<"\n";
	
	}


}
