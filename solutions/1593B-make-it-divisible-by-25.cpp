/*
 * Codeforces 1593B - Make it Divisible by 25
 * Rating: 900 | Tags: dfs and similar, dp, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1593/B
 * Submission: https://codeforces.com/contest/1593/submission/132019760
 * Solved: 2021-10-15 (VIRTUAL)
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
		
		int n=ch.size();
		
		int ans=0;
		int aux5=-1,aux72=-1;
		
		int s=0;
		for(int i=n-1;i>=0;i--)
		{
			s++;
			if(ch[i]=='5')
			{
				
				aux5=i;
				break;	
			}
		}
		
		for(int i=aux5-1;i>=0;i--)
		{
			s++;
			if(ch[i]=='2' || ch[i]=='7')
			{
				aux72=i;
				break;	
			}
		}
		
		int ans1=1000000;
		if(aux72!=-1 && aux5!=-1)
			ans1=s-2;
			
			
		s=0;
		aux5=-1,aux72=-1;
		for(int i=n-1;i>=0;i--)
		{
			s++;
			if(ch[i]=='0')
			{
				
				aux5=i;
				break;	
			}
		}
		
		for(int i=aux5-1;i>=0;i--)
		{
			s++;
			if(ch[i]=='0' || ch[i]=='5')
			{
				aux72=i;
				break;	
			}
		}
		
		int ans2=1000000;
		if(aux72!=-1 && aux5!=-1)
			ans2=s-2;
		
		cout<<min(ans1,ans2)<<"\n";
	
	}


}
