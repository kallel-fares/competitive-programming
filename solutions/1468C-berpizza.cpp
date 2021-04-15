/*
 * Codeforces 1468C - Berpizza
 * Rating: 1400 | Tags: data structures, implementation
 * Problem:    https://codeforces.com/problemset/problem/1468/C
 * Submission: https://codeforces.com/contest/1468/submission/113089537
 * Solved: 2021-04-15 (PRACTICE)
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

bool comp(pair<int,int> a,pair<int,int> b)
{
	if(a.first!=b.first) return a.first<b.first;
	return a.second>b.second;
	
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	
	int n;
	cin>>n;
	
	vector<int> vec(n+1);
	set<pair<int,int>,decltype(&comp)> data(&comp);
	
	int a,b,mark=1;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		/*cout<<"\n";
		for(auto x:data)
		{
			cout<<x.first<<" "<<x.second<<"\n";
		}
		cout<<"\n";*/
		cin>>a;
		if(a==1)
		{
			cin>>b;
			cnt++;
			data.insert(make_pair(b,cnt));
			
		}
		else if(a==2)
		{
			while(vec[mark])
			{
				mark++;
			}
			vec[mark]++;
			cout<<mark<<" ";
		}
		else
		{
			while(vec[(*data.rbegin()).second])
			{
				//cout<<(*data.rbegin()).first<<" "<<(*data.rbegin()).second<<"\n";
				data.erase(--data.end());
			}
			cout<<(*data.rbegin()).second<<" ";
			vec[(*data.rbegin()).second]++;
		
			
		}
		
	}
	


}
