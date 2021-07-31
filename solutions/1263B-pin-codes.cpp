/*
 * Codeforces 1263B - PIN Codes
 * Rating: 1400 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1263/B
 * Submission: https://codeforces.com/contest/1263/submission/124414825
 * Solved: 2021-07-31 (PRACTICE)
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
		
		vector<string> vec(n);
		map<string,int> freq;
	
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			freq[vec[i]]++;
		}
			
		int ans=0;
		for(auto x:freq)
		{
			ans+=max(0,x.second-1);
		}
		
		
		
		
		cout<<ans<<"\n";
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<=10;j++)
			{
				if(freq[vec[i]]==1)
					break;
				
				freq[vec[i]]--;
				vec[i][0]=char((vec[i][0]+1)%10+'0');
				
				freq[vec[i]]++;
			}
		}
		
		for(int i=0;i<n;i++)
			cout<<vec[i]<<"\n";
		
		
		
	}


}
