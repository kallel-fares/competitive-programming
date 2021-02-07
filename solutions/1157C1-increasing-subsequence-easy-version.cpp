/*
 * Codeforces 1157C1 - Increasing Subsequence (easy version)
 * Rating: 1300 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1157/C1
 * Submission: https://codeforces.com/contest/1157/submission/106736736
 * Solved: 2021-02-07 (PRACTICE)
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
	
		int n;
		cin>>n;
		string ans="";
		vector<int> vec(n);
		stack<int> s;
		
		s.push(-1);
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		int i=0;
		while((vec[i]>s.top() || vec[n-1]>s.top()) && i<=n-1)
		{
		
			if(vec[i]<vec[n-1])
			{
				if(vec[i]>s.top())
				{
					ans+='L';
					s.push(vec[i]);
					i++;
				}
				else
				{
					ans+='R';
					s.push(vec[n-1]);	
					n--;
				}	
			}
			else
			{
				if(vec[n-1]>s.top())
				{
					ans+='R';
					s.push(vec[n-1]);	
					n--;
					
				}
				else
				{
					ans+='L';
					s.push(vec[i]);
					i++;
				}
				
			}
		}	
		
		cout<<ans.size()<<"\n";
		cout<<ans;
		
		//memset(tab,0,4*(n+1));
	
	


}
