/*
 * Codeforces 1472D - Even-Odd Game
 * Rating: 1200 | Tags: dp, games, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1472/D
 * Submission: https://codeforces.com/contest/1472/submission/103325168
 * Solved: 2021-01-04 (PRACTICE)
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
		
		vector<int> odd,even;
		stack<int> stodd,steven;
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a&1)
				odd.pb(a);
			else
				even.pb(a);
				
		}
		
		sort(odd.begin(),odd.end());
		sort(even.begin(),even.end());
		
		stodd.push(-1);
		steven.push(-1);
		
		for(auto x:odd)
		{
			stodd.push(x);
		}
		
		for(auto x:even)
		{
			steven.push(x);
		}
		
		int pair=1;
		ll alice=0,bob=0;
		
		//cout<<steven.top()<<" "<<stodd.top();
		while(steven.top()!=-1 || stodd.top()!=-1)
		{
			if(pair&1)
			{
				if(steven.top()>stodd.top())
				{
					//cout<<"qd";
					alice+=steven.top();
					steven.pop();
				}
				else
				{
					stodd.pop();
				}
			}
			else
			{
				if(steven.top()>stodd.top())
				{
					steven.pop();
				}
				else
				{
					
					bob+=stodd.top();
					stodd.pop();
				}
			}
			pair=(pair+1)%2;
		}
		
		//cout<<alice<<" "<<bob<<" ";
		if(alice>bob)
			cout<<"Alice";
		else if(alice<bob)
			cout<<"Bob";
		else
			cout<<"Tie";
		cout<<"\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
