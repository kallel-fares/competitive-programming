/*
 * Codeforces 1504A -  Déjà Vu
 * Rating: 800 | Tags: constructive algorithms, strings
 * Problem:    https://codeforces.com/problemset/problem/1504/A
 * Submission: https://codeforces.com/contest/1504/submission/112140264
 * Solved: 2021-04-06 (VIRTUAL)
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
		string ch,v="*";
		cin>>ch;
		
		string aux1=ch+'a',aux2='a'+ch;
		int n=ch.size()-1;
		
		int l=0,r=aux1.size()-1;
		while(l<r)
		{
			if(aux1[l]!=aux1[r])
			{
				v=aux1;
				break;
			}
			l++,r--;
		}
		
		l=0,r=aux1.size()-1;
		while(l<r)
		{
			if(aux2[l]!=aux2[r])
			{
				v=aux2;
				break;
			}
			l++,r--;
		}
		
		if(v=="*")
		{
			cout<<"NO\n";
		}
		else
			cout<<"YES\n"<<v<<"\n";
		
	
	}


}
