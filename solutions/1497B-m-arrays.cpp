/*
 * Codeforces 1497B - M-arrays
 * Rating: 1200 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1497/B
 * Submission: https://codeforces.com/contest/1497/submission/110228567
 * Solved: 2021-03-17 (CONTESTANT)
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
		int n,m,ans=0;
		cin>>n>>m;
		vector<int> freq(m);
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			
			//cout<<a%m<<" ";
			freq[a%m]++;
		}
		
		/*for(int i=0;i<m;i++)
			cout<<freq[i]<<" ";
		cout<<"\n";*/
		
		if(freq[0])
		{
			freq[0]=0;
			ans++;
		}
		
		if(m%2==0)
		{
			if(freq[m/2])
			{
				ans++;
				freq[m/2]=0;
			}
		}
		
		for(int i=1;i<m;i++)
		{
			if(freq[i] && freq[m-i])
			{
				ans++;
				int aux=min(freq[m-i],freq[i]);
				freq[i]-=aux;
				freq[m-i]-=aux;
				ans+=max(0,max(freq[i],freq[m-i])-1);
			}
			else
			{
				ans+=max(freq[i],freq[m-i]);
			}
				
			freq[i]=freq[m-i]=0;
		}
		
		
		
		
		cout<<ans<<"\n";
	}


}
