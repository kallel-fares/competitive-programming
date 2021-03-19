/*
 * Codeforces 1499B - Binary Removals
 * Rating: 1000 | Tags: brute force, dp, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1499/B
 * Submission: https://codeforces.com/contest/1499/submission/110455571
 * Solved: 2021-03-19 (PRACTICE)
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
 
 
bool isorted(string aux)
{
	for(int i=0;i<aux.size()-1;i++)
	{
		if(aux[i]>aux[i+1])
			return false;
	}
	return true;
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	
	//freopen("","r",stdin);
	testc
	{
		string ch;
		cin>>ch;
		//cout<<isorted(ch)<<"\n";
		int v=0,ans=0;
		for(int i=0;i<ch.size()-1;i++)
		{
			if(ch[i]==ch[i+1] && ch[i]=='1')
				v=1;
			
			if(v && (ch[i+1]=='0' && ch[i]=='0'))
			{
				ans++;
				break;
			}
		}
		if(ans)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}
 
 
}
