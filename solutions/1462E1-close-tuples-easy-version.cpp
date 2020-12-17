/*
 * Codeforces 1462E1 - Close Tuples (easy version)
 * Rating: 1500 | Tags: binary search, combinatorics, math, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1462/E1
 * Submission: https://codeforces.com/contest/1462/submission/101597715
 * Solved: 2020-12-17 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

ll comb3(int n)
{
	ll ans=1;
	if(n<3)
		return 0;
	for(int i=n-2;i<=n;i++)
		ans*=i;
	return ans/6;
}


//ll dp[N]={0};

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	/*dp[3]=1;
	for(int i=4;i<=200000;i++)
	{
		
		
		//cout<<dp[i+1]<<" ";
	
		
	}
	//cout<<dp[200000]<<" ";
	*/
	testc
	{
		int n,tab[N];
		
		cin>>n;
		
		memset(tab,0,4*(max(n,3)+1));
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			tab[a]++;
		}
		
		int aux=tab[1]+tab[2]+tab[3];
		ll ans=comb3(aux);
		//int mid=0;
		for(int i=2;i<=n-2;i++)
		{
			
			aux-=tab[i-1];
			ans-=comb3(aux);
			aux+=tab[i+2];
			ans+=comb3(aux);
		}
		
		cout<<ans<<"\n";
		
	}


}
