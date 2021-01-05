/*
 * Codeforces 1187B - Letters Shop
 * Rating: 1300 | Tags: binary search, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1187/B
 * Submission: https://codeforces.com/contest/1187/submission/103484519
 * Solved: 2021-01-05 (PRACTICE)
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

	int n;
	cin>>n;
	
	string ch;
	cin>>ch;
	
	vector<int> vect(30);
	int m[N][30];
	
	
	for(int i=0;i<n;i++)
	{
		
		
		vect[ch[i]-'a']++;
		m[vect[ch[i]-'a']][ch[i]-'a']=i+1;
	}
	
	
	

	//freopen("","r",stdin);
	testc
	{
		cin>>ch;
		int n=ch.size(),ans=0;
		
		
		
		vector<int> vect(30);
		
		for(int i=0;i<n;i++)
		{
			vect[ch[i]-'a']++;
			ans=max(ans,m[vect[ch[i]-'a']][ch[i]-'a']);
		}
		
		cout<<ans<<"\n";
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
