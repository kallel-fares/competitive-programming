/*
 * Codeforces 1529B - Sifid and Strange Subsequences
 * Rating: 1100 | Tags: greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1529/B
 * Submission: https://codeforces.com/contest/1529/submission/129781689
 * Solved: 2021-09-24 (PRACTICE)
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
		
		
		vector<int> vec(n),vec2(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		sort(vec.begin(),vec.end());
		
		vec2[0]=1e9+1;
		for(int i=1;i<n;i++)
			vec2[i]=min(abs(vec[i-1]-vec[i]),vec2[i-1]);
			
		int v=1;
		for(int i=n-1;i>=0;i--)
		{
			//cout<<"("<<i<<" , "<<v<<") ";
			if(vec2[i]>=vec[i])
			{
				v=i+1;
				break;
			}
		}		
		
		/*for(int i=0;i<n;i++)
		{
			cout<<vec[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<vec2[i]<<" ";
		}*/
		
		
		cout<<v<<"\n";
		
		
	}


}
