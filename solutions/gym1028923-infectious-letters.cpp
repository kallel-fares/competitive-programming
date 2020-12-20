/*
 * Codeforces gym1028923 - Infectious Letters
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102892/problem/3
 * Submission: https://codeforces.com/gym/102892/submission/101851060
 * Solved: 2020-12-20 (PRACTICE)
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
	
	
	int n,aux=0,ans=0;
	string ch;
	cin>>n;
	cin>>ch;
	ch+='b';
	for(int i=0;i<n;i++)
	{
		int v=0;
		while(ch[i]!='b')
		{
			aux++;
			if(ch[i]=='a')
			{
				v=1;
			}
			i++;
		}
		if(v)
		{
			ans+=aux;
			
		}
		aux=0;
	}
	cout<<ans;


}
