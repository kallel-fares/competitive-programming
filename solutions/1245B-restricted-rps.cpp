/*
 * Codeforces 1245B - Restricted RPS
 * Rating: 1200 | Tags: constructive algorithms, dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1245/B
 * Submission: https://codeforces.com/contest/1245/submission/100656681
 * Solved: 2020-12-07 (PRACTICE)
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
		int n,tab[4]={0},tab2[4]={0},v=0;
		string ch;
		cin>>n;
		for(int i=0;i<3;i++)
		{
			cin>>tab[i];
		}
		cin>>ch;
		string ch2=ch;
		for(int i=0;i<n;i++)
		{
			ch2[i]='1';
			if(ch[i]=='R')
				tab2[1]++;
			if(ch[i]=='S')
				tab2[0]++;
			if(ch[i]=='P')
				tab2[2]++;
		}
		
		for(int i=0;i<3;i++)
		{
			v+=min(tab[i],tab2[i]);
		}
		//cout<<v<<"\n";
		if(v>=n/2+n%2)
		{
			cout<<"YES\n";
			for(int i=0;i<n;i++)
			{
				if(ch[i]=='S' && tab[0])
				{
					ch2[i]='R';
					tab[0]--;
				}
				if(ch[i]=='R' && tab[1])
				{
					ch2[i]='P';
					tab[1]--;
				}
				if(ch[i]=='P' && tab[2])
				{
					ch2[i]='S';
					tab[2]--;
				}
				
			}
			for(int i=0;i<n;i++)
			{
				if(ch2[i]=='1')
				{
					if(tab[0])
					{
						ch2[i]='R';
						tab[0]--;
					}
					else if(tab[1])
					{
						ch2[i]='P';
						tab[1]--;
					}
					else
					{
						ch2[i]='S';
						tab[2]--;
					}
				}	
			}
			
			cout<<ch2<<"\n";
			
		}
		else
		{
			cout<<"NO\n";
		}
		
		
		
		
		
		
	}


}
