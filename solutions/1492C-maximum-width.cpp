/*
 * Codeforces 1492C - Maximum width
 * Rating: 1500 | Tags: binary search, data structures, dp, greedy, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1492/C
 * Submission: https://codeforces.com/contest/1492/submission/108319355
 * Solved: 2021-02-23 (PRACTICE)
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
	
	int n,m;
	string ch1,ch2;
	
	
	cin>>n>>m;
	
	vector<int>left(m),right(m);
	cin>>ch1>>ch2;
	
	int flag=0;
	for(int i=0;i<m;i++)
	{
		for(int j=flag;j<n;j++)
		{
			if(ch2[i]==ch1[j])
			{
				left[i]=j+1;
				flag=j+1;
				break;
			}
		}
	}
	
	flag=n-1;
	for(int i=m-1;i>=0;i--)
	{
		for(int j=flag;j>=0;j--)
		{
			if(ch2[i]==ch1[j])
			{
				right[i]=j+1;
				flag=j-1;
				break;
			}
		}
	}
	
	/*for(auto x:left)
		cout<<x<<" ";
	cout<<"\n";
	
	for(auto x:right)
		cout<<x<<" ";
	cout<<"\n";
	*/
	
	int ans=0;
	for(int i=0;i<m-1;i++)
	{
		//cout<<right[i]<<" ";
		ans=max(ans,max(max(left[i+1]-left[i],left[i+1]-right[i]),max(right[i+1]-left[i],right[i+1]-right[i])));
		
	}
	cout<<ans<<"\n";

}
