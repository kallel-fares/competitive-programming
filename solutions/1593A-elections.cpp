/*
 * Codeforces 1593A - Elections
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1593/A
 * Submission: https://codeforces.com/contest/1593/submission/132017667
 * Solved: 2021-10-15 (VIRTUAL)
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
		int a,b,c;
		cin>>a>>b>>c;
		
		map<int,int> freq;
		int maxi=max(a,max(b,c));
		freq[a]++;
		freq[b]++;
		freq[c]++;
		
		if(a==maxi)
		{
			if(freq[maxi]>1)
			{
				cout<<maxi+1-a;
			}
			else
				cout<<0;
		}
		else
			cout<<maxi+1-a;
		
		cout<<" ";
		if(b==maxi)
		{
			if(freq[maxi]>1)
			{
				cout<<maxi+1-b;
			}
			else
				cout<<0;
		}
		else
			cout<<maxi+1-b;
		
		cout<<" ";
		if(c==maxi)
		{
			if(freq[maxi]>1)
			{
				cout<<maxi+1-c;
			}
			else
				cout<<0;
		}
		else
			cout<<maxi+1-c;
		//memset(tab,0,4*(n+1));
		cout<<"\n";
	
	}


}
