/*
 * Codeforces 1375C - Element Extermination
 * Rating: 1400 | Tags: constructive algorithms, data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1375/C
 * Submission: https://codeforces.com/contest/1375/submission/109068665
 * Solved: 2021-03-04 (PRACTICE)
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
		cin>>n;
		vector<int>vec(n+1);
		vector<pair<int,int>>ans;
		
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		vec[n]=-1;
		for(int i=0;i<n;i++)
		{
			int mini=vec[i],maxi=vec[i];
			while(vec[i]<vec[i+1])
			{
				mini=min(mini,vec[i+1]);
				maxi=max(maxi,vec[i+1]);
				i++;
			}
			ans.pb(make_pair(mini,maxi));
			
		}
		int v1=0,v2=0;
		for(int i=0;i<ans.size()-1;i++)
		{
			if(ans[i].first>ans[i+1].second)
			{
				v1=1;
			}
			else
			{
				ans[i+1].first=ans[i].first;
			}

		}
		
		for(int i=ans.size()-1;i>0;i--)
		{
			if(ans[i-1].first>ans[i].second)
			{
				v2=1;
				break;
			}
			else
			{
				ans[i-1].second=ans[i].second;
			}

		}
		
		/*for(auto x:ans)
		    cout<<x.first<<" "<<x.second<<"\n";*/
		
		if(v1 && v2)
			cout<<"NO";
		else
			cout<<"YES";
			
		
		
		cout<<"\n";
	
	}


}
