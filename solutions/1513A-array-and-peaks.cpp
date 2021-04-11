/*
 * Codeforces 1513A - Array and Peaks
 * Rating: 800 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1513/A
 * Submission: https://codeforces.com/contest/1513/submission/112673756
 * Solved: 2021-04-11 (CONTESTANT)
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
		int n,k;
		cin>>n>>k;
		
		
		
		vector<int>vec(n);
		
		if(n%2==0)
		{
			if(n/2<=k)
			{
				cout<<"-1\n";
				continue;
			}
		}
		else
		{
			if(n/2<k)
			{
				cout<<"-1\n";
				continue;
			}
		}
		
		
		for(int i=0;i<k;i++)
		{
			vec[i*2+1]=n-i;
			//cout<<vec[i*2+1]<<" ";
		}
		
		int v=1;	
		for(int i=0;i<n;i++)
		{
			if(!vec[i])
			{
				vec[i]=v;
				v++;
			}
		}
			
		//}
		for(auto x:vec)
			cout<<x<<" ";
		cout<<"\n";
	}


}
