/*
 * Codeforces 1237B - Balanced Tunnel
 * Rating: 1300 | Tags: data structures, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1237/B
 * Submission: https://codeforces.com/contest/1237/submission/106409834
 * Solved: 2021-02-03 (PRACTICE)
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
	
		int n,a,ans=0;
		cin>>n;
		vector<int>vec1(n),vec2(n);
		stack<int> s;
		map<int,int>freq;
		for(int i=n-1;i>=0;i--)
		{
			cin>>vec1[i];
		}
		
		for(int i=0;i<n;i++)
		{
			s.push(vec1[i]);
		}
		
		
		
		/*
		while(!s.empty())
		{
			cout<<s.top();
			s.pop();
			
		}
		*/
		
		for(int i=0;i<n;i++)
		{
			while(freq[s.top()])
			{
				s.pop();
				continue;
			}
			cin>>a;
			
			if(s.top()==a)
			{
				s.pop();
			}
			else
			{
				ans++;
				freq[a]++;
			}
		}
		
		
		
		
		
		
		cout<<ans<<"\n";
		
		
		
		//memset(tab,0,4*(n+1));
	
	


}
