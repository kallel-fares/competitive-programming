/*
 * Codeforces 1427B - Chess Cheater
 * Rating: 1400 | Tags: greedy, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1427/B
 * Submission: https://codeforces.com/contest/1427/submission/108539548
 * Solved: 2021-02-26 (PRACTICE)
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
		int n,k,ans=0;
		vector<int> aux;
		string ch;
		cin>>n>>k;
		cin>>ch;
		int mark=0,rest=0;
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='L')
			{
				mark=i;
				int v=1;
				while(ch[i]==ch[i+1] && i<n)
				{
					i++;
					v++;
				}
				if(mark!=0 && i<n-1)
					aux.pb(v);
				else
					rest+=v;
				
			}
			else
			{
				ans+=1;
				while(ch[i]==ch[i+1] && i<n)
				{
					i++;
					ans+=2;
				}
				
				
			}
		}
		
		sort(aux.begin(),aux.end());
		
		
		/*for(auto x:aux)
			cout<<x<<" ";
		cout<<"\n";*/
		
		if(!k)
		{
			cout<<ans<<"\n";
			continue;
		}
		
		if(!ans)
		{
			cout<<k*2-1<<"\n";
			continue;
		}
		
		for(auto x:aux)
		{
			if(x<=k)
			{
				ans+=x*2+1;
				k-=x;
				
			}
			else
			{
				ans+=k*2;
				k=0;
				break;
			}
		}
		if(k)
		{
			ans+=min(k,rest)*2;
		}
		cout<<ans<<"\n";
		
		
	}


}
