/*
 * Codeforces 1454C - Sequence Transformation
 * Rating: 1200 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1454/C
 * Submission: https://codeforces.com/contest/1454/submission/99504943
 * Solved: 2020-11-24 (PRACTICE)
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

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,tab[N]={0},freq[N]={0},cnt=0,ans=100000000,mini=100000000;
		//memset(freq, 1, sizeof(freq));
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
			
		
		/*
		for(int i=0;i<n;i++)
		{
			if(tab[i]!=tab[0])
			{
				cnt++;
				while(tab[i]!=tab[0])
				{
					i++;
				}
				
			}
		}
		ans=min(ans,cnt);
	//	cout<<ans<<" ";
		cnt=0;
		for(int i=0;i<n;i++)
		{
			if(tab[i]!=tab[n-1])
			{
				cnt++;
				while(tab[i]!=tab[n-1])
				{
					i++;
				}
				
			}
		}
		ans=min(ans,cnt);
		*/
		for(int i=0;i<n;i++)
		{
			//cout<<"tab[i]="<<tab[i]<<" tab[i+1]"<<tab[i+1];
			while(tab[i]==tab[i+1])
			{
				i++;
			}
			if(!freq[tab[i]])
				freq[tab[i]]++;
			freq[tab[i]]++;
			
		}
		freq[tab[0]]--;
		freq[tab[n-1]]--;
		mini=min(freq[tab[0]],freq[tab[n-1]]);
		for(int i=0;i<=n;i++)
		{
			//cout<<freq[i]<<" ";
			if(freq[i])
				mini=min(mini,freq[i]);
		}
		
		
		
		cout<<mini<<" \n";
		
		
		
	}


}
