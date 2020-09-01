/*
 * Codeforces 1397A - Juggling Letters
 * Rating: 800 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1397/A
 * Submission: https://codeforces.com/contest/1397/submission/91560196
 * Solved: 2020-09-01 (VIRTUAL)
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
		string tab[N];
		int count[N]={0},v=0,n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
			for(int j=0;j<tab[i].length();j++)
			{
				count[(int)tab[i][j]]++;
			}
		}
		for(int i=(int)'a';i<=(int)'z';i++)
		{
			if(count[i]%n!=0)
				v=1;
				
		}
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}

}
