/*
 * Codeforces 1362B - Johnny and His Hobbies
 * Rating: 1200 | Tags: bitmasks, brute force
 * Problem:    https://codeforces.com/problemset/problem/1362/B
 * Submission: https://codeforces.com/contest/1362/submission/97510734
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
		int tab[1025]={0},freq[1025]={0},n,ans=0,v=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			freq[tab[i]]++;
			
		}
		
		int i=1;
		while(1024>i)
		{
			//cout<<i<<" ";
			for(int j=0;j<n;j++)
			{
				if(freq[tab[j]^i])
				{
					ans++;
				}
				else
				{
					ans=0;
					break;
				}
			}
			/*	if(tab[j]&i)
				{
					if(freq[tab[j]-i])
					{
						ans++;
					}
					else
					{
						ans=0;
						break;
					}
				}
				else
				{
					if(freq[tab[j]+i])
					{
						ans++;
					}
					else
					{
						ans=0;
						break;
					}
				}
			*/
			if(ans==n)
			{
				v=i;
				break;
			}
				
			i++;
			
		}
		
		
		if(v)
		{
			cout<<v<<"\n";
		}
		else
		{
			if(n==2)
			{
				cout<<(tab[0]^tab[1])<<"\n";
			}
			else
				cout<<"-1\n";
		}
		
	}


}
