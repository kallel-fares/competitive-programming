/*
 * Codeforces 1307C - Cow and Message
 * Rating: 1500 | Tags: brute force, dp, math, strings
 * Problem:    https://codeforces.com/problemset/problem/1307/C
 * Submission: https://codeforces.com/contest/1307/submission/134572324
 * Solved: 2021-11-07 (PRACTICE)
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


pair<ll,vector<int>> som(vector<int> vec ,int a,int n)
{
	
	ll aux=vec[a],ans=0;
	vector<int> vecaux(n);
	for(int i=a;i<n;i++)
	{
		vecaux[i]=min(aux,(ll)vec[i]);
		aux=vecaux[i];
		ans+=aux;
	}
	
	aux=vec[a];
	for(int i=a-1;i>=0;i--)
	{
		vecaux[i]=min(aux,(ll)vec[i]);
		aux=vecaux[i];
		ans+=aux;
	}
	return make_pair(ans,vecaux);
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	string ch;
	cin>>ch;
	
	ll ans=0;
	int n=ch.size();
	
	
	for(int i=0;i<26;i++)
	{
		
		for(int j=0;j<26;j++)
		{
			ll f=0,s=0,minians=0;
			for(int k=0;k<n;k++)
			{
				
				if(ch[k]-'a'==j)
				{
					minians+=f;
				}
				if(ch[k]-'a'==i)
				{
					f++;
					
				}
				
			}
			minians=max(f,minians);
			ans=max(ans,minians);
			
			
		}	
		
	
	}
	cout<<ans;

}
