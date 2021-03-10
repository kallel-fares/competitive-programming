/*
 * Codeforces 1363B - Subsequence Hate
 * Rating: 1400 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1363/B
 * Submission: https://codeforces.com/contest/1363/submission/109549675
 * Solved: 2021-03-10 (PRACTICE)
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
		
		vector<int>aux;
		string ch;
		cin>>ch;
		int n=ch.size(),ans=0;
		ch+='a';
		for(int i=0;i<n;i++)
		{
			int v=1;
			while(ch[i]==ch[i+1])
			{
				v++;
				i++;
			}
			aux.pb(v);
			
		}
		
		for(int i=0;i<aux.size();i+=2)
		{
			ans+=aux[i];
		}
		int v=ans;
		for(int i=0;i<aux.size();i++)
		{
			if(i&1)
				v+=aux[i];
			else
				v-=aux[i];
			ans=min(ans,v);
		}
		
		for(int i=0;i<aux.size();i++)
		{
			if(!(i&1))
				v+=aux[i];
			else
				v-=aux[i];
			ans=min(ans,v);
		}
		cout<<ans<<"\n";
	
	}


}
