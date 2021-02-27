/*
 * Codeforces 1425A - Arena of Greed
 * Rating: 1400 | Tags: games, greedy
 * Problem:    https://codeforces.com/problemset/problem/1425/A
 * Submission: https://codeforces.com/contest/1425/submission/108599714
 * Solved: 2021-02-27 (PRACTICE)
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
		ll n,ans=0;
		
		int v=0,check=0;
		cin>>n;
		ll aun=n;
		
		if(n&1)
		{
			check=1;
			ans=1;
			n--;
		}
		
		
			
		
		
		while(n)
		{
			//cout<<ans<<" "<<n<<"\n";
			ll aux=0;
		
			
			if(n%4==0)
			{
				aux=1;
			}
			else
				aux=n/2;	
			
			if(n==4)
			{
				ans+=3;
				break;
			}
			
			ans+=aux;
			n-=aux+1;
		}
		
		if(!check)
			cout<<ans<<"\n";
		else
			cout<<aun-ans+1<<"\n";
	
	
	}


}
