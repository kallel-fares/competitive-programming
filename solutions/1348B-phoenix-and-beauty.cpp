/*
 * Codeforces 1348B - Phoenix and Beauty
 * Rating: 1400 | Tags: constructive algorithms, data structures, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1348/B
 * Submission: https://codeforces.com/contest/1348/submission/78833553
 * Solved: 2020-05-02 (PRACTICE)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
 
int rec(int n,int po,int s1,int s2)
{
	if(po==n)
		return 1;
	return min(rec(n,po+1,s1+1<<po,s2),rec(n,po+1,s1,s2+1<<po));
}
 
const int N=2e5+5;
 
 
int main ()
{
	int n;
	testc
	{	
		vector<int> v;
		int s=0,maxi=0,k;
		int tab[N]={0},freq[N]={0};
		cin>>n>>k;
		//for(int i=0;i<n;i++)cin>>tab[i],!freq[tab[i]]?s++,freq[tab[i]]=1,v.push_back(tab[i]):freq[tab[i]]+=1,maxi=max(maxi,freq[tab[i]]);
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			if(!freq[tab[i]])
			{
				s++;
				freq[tab[i]]=1;
				v.push_back(tab[i]);
					
			}
			else
			{
				freq[tab[i]]+=1;	
			}
		
		
		}
		
		while(v.size()<k)
		{
			v.push_back(1);
		}
		if(s>k)
			cout<<"-1";
		else
			{
				cout<<n*k<<"\n";
				for(int i=0;i<n;i++)
				{
					for(auto x:v)
						cout<<x<<" ";
				}
			}
		cout<<"\n";
		
		
		
	}
 
 
}
