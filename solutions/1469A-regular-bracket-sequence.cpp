/*
 * Codeforces 1469A - Regular Bracket Sequence
 * Rating: 1000 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1469/A
 * Submission: https://codeforces.com/contest/1469/submission/102557435
 * Solved: 2020-12-28 (CONTESTANT)
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
		string ch;
		cin>>ch;
		if(ch[0]==')' || ch[ch.size()-1]=='(' || ch.size()&1)
		{
			cout<<"NO\n";
		} 
		else
			cout<<"YES\n";
			
			
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
