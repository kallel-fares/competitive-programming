/*
 * Codeforces gym102881A - Officer Anany Collecting String Subsequences
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102881/problem/A
 * Submission: https://codeforces.com/gym/102881/submission/102078166
 * Solved: 2020-12-22 (PRACTICE)
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
	
	freopen("collectingofficer.in", "r", stdin);
	
	testc
	{
		int n,tab[30]={0};
		string ch;
		
		
		cin>>n;
		cin>>ch;
		
		
		int ans=777;
		int v=1;
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='A')
			{
				memset(tab,0,4*28);
				tab[0]=1;
				v=1;
				for(int j=i+1;j<n;j++)
				{
					
					if(tab[25])
					{
						break;
					}
					v++;
					if(ch[j]=='A')
						continue;
					if(tab[(ch[j]-'A')-1])
					{
						tab[ch[j]-'A']++;
					}
					
					
					
				}
				if(tab[25])
					ans=min(ans,v);
				
			}
		}
		
		cout<<ans<<"\n";
		
		
	
	}


}
