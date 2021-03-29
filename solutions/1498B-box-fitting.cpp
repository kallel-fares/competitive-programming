/*
 * Codeforces 1498B - Box Fitting
 * Rating: 1300 | Tags: binary search, bitmasks, data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1498/B
 * Submission: https://codeforces.com/contest/1498/submission/111391731
 * Solved: 2021-03-29 (CONTESTANT)
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

int popo(int a,int b)
{
	if(b=0)
		return 1;
	
	int aux=popo(a,b/2);
	if(b&1)
	{
		return aux*aux*a;
	}
	else
	{
		return aux*aux;
	}
}



int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		
		int n,w,ans=0;
		cin>>n>>w;
		
		vector<int> freq(60);
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			freq[(int)log2(a)]++;
		}
		int v=1;
		
		while(v)
		{
			ans++;
			v=0;
			
			int aux=w;
			for(int i=50;i>=0;i--)
			{
				//cout<<freq[i]<<" ";
				if((aux>=(1<<i)) && freq[i])
				{
					freq[i]--;
					aux-=1<<i;
					v=1;
					i++;
				}
			}
			//cout<<"\n";
		}
		
		
		cout<<ans-1<<"\n";
	
	}


}
