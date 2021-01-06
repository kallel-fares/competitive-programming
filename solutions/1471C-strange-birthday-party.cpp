/*
 * Codeforces 1471C - Strange Birthday Party
 * Rating: 1300 | Tags: brute force, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1471/C
 * Submission: https://codeforces.com/contest/1471/submission/103586408
 * Solved: 2021-01-06 (PRACTICE)
 */

/***********dicfore************/



#include <bits/stdc++.h>
using namespace std;


#define pb push_back
#define all(x) (x).begin(),(x).end()
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int n,m;
		cin>>n>>m;
		//map <int,int>freq;
		
		
		ll ans=0;
		
		vector<ll> vect1(n),vect2(m);
		for(int i=0;i<n;i++)
			cin>>vect1[i];
		for(int i=0;i<m;i++)
			cin>>vect2[i];
			
		for(int i=0;i<n;i++)
		{
			vect1[i]=vect2[vect1[i]-1];
			ans+=vect1[i];
		}
		
		sort(vect1.begin(),vect1.end(),greater<ll>());	
		sort(vect2.begin(),vect2.end());
		
		
		/*for(auto x:vect1)
		{
			cout<<x<<" ";
		}
		cout<<"\n";
		for(auto x:vect2)
		{
			cout<<x<<" ";
		}*/
		//cout<<ans<<" ";
		int i=0;
		while(vect1[i]>vect2[i] && i<n && i<m)
		{
			
			ans+=vect2[i]-vect1[i];
			//freq[vect2[i]]++;
			i++;
		}
		
		cout<<ans<<"\n";
		//memset(tab,0,4*(n+1));
	
	}


}
