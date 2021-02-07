/*
 * Codeforces 1165C - Good String
 * Rating: 1300 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1165/C
 * Submission: https://codeforces.com/contest/1165/submission/106741828
 * Solved: 2021-02-07 (PRACTICE)
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
	int n;
	string ch,ans="";
	
	cin>>n;
	cin>>ch;
	ch+='1';
	int j;
	ans+=ch[0];
	for(int i=1;i<n;i++)
	{
		j=i;
		if(ans.size()&1)
		{
			while(ans[ans.size()-1]==ch[j] && j<n)
			{
				j++;
			}
			if(j<n)
				ans+=ch[j];
			i=j;	
		}
		else
		{
			ans+=ch[i];
		}
		
		
		
	}
	
	int len=ans.size();
	len-=ans.size()%2;
	
	cout<<n-len<<"\n";
	for(int i=0;i<len;i++)
	{
		cout<<ans[i];
	}
	
	


}
