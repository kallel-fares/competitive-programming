/*
 * Codeforces 1512D - Corrupted Array
 * Rating: 1200 | Tags: constructive algorithms, data structures, greedy
 * Problem:    https://codeforces.com/problemset/problem/1512/D
 * Submission: https://codeforces.com/contest/1512/submission/112927648
 * Solved: 2021-04-13 (VIRTUAL)
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
		int n,aux=0;
		cin>>n;
		vector<ll> vec(n+2);
		ll sum=0;
		for(int i=0;i<n+2;i++)
		{
			cin>>vec[i];
			sum+=vec[i];
		}
		
		sort(vec.begin(),vec.end(),greater<int>());
		sum-=vec[0];
		for(int i=1;i<n+2;i++)
		{
			if(sum-vec[i]==vec[0])
			{
				aux=i;
				break;
			}
		}
		
		if(aux)
		{
			for(int i=1;i<n+2;i++)
			{
				if(i!=aux)
					cout<<vec[i]<<" ";
			}
			cout<<"\n";
			continue;
		}
		
		if(sum-vec[1]==vec[1])
		{
			for(int i=2;i<n+2;i++)
			{
				cout<<vec[i]<<" ";
			}
			cout<<"\n";
			continue;
		}
		
		cout<<"-1\n";
		
		
	
	}


}
