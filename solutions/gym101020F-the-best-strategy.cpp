/*
 * Codeforces gym101020F - The Best Strategy
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101020/problem/F
 * Submission: https://codeforces.com/gym/101020/submission/102267556
 * Solved: 2020-12-24 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

//const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,tab[17]={0},ans[17]={0};
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>tab[i];
		}
		
		sort(tab,tab+n);
		
		ans[0]=tab[0];
		for(int i=1;i<n;i++)
		{
			
			ans[i]+=ans[i-1]+tab[i];
			//cout<<ansqz[i]<<" ";
		}
		
		
		
		int i=0,v=0;
		while(ans[i]<=300 && i<n)
		{
			v+=ans[i];
			i++;
		}
		
		cout<<i<<" "<<v<<"\n";
	
		
	
	}


}
