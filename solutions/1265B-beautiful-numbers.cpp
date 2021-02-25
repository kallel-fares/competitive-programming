/*
 * Codeforces 1265B - Beautiful Numbers
 * Rating: 1300 | Tags: data structures, implementation, math, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1265/B
 * Submission: https://codeforces.com/contest/1265/submission/108479269
 * Solved: 2021-02-25 (VIRTUAL)
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
		
		set<int>aux;
		
		
		int a,b;
		
		
		cin>>n;
		
		vector<int>freq(n+1),vec(n+1);
		
		
		for(int i=1;i<=n;i++)
		{
			cin>>vec[i];
			if(vec[i]==1)
			{
				a=b=i;
				aux.insert(1);
			}
			freq[vec[i]]=i;
		}
		
		
		for(int i=1;i<=n;i++)
		{
			//cout<<"hi";
			if(freq[i]<a)
			{
				for(int j=a;j>=freq[i];j--)
				{
					aux.insert(vec[j]);
				}
				a=freq[i];
			}
			else if(freq[i]>b)
			{
				for(int j=b;j<=freq[i];j++)
				{
					aux.insert(vec[j]);
				}
				b=freq[i];
			}
			
			if(*aux.end()==i && aux.size()==i)
				cout<<1;
			else
				cout<<0;
				
		}
		
		cout<<"\n";
	}


}
