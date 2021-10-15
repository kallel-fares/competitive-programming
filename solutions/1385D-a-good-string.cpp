/*
 * Codeforces 1385D - a-Good String
 * Rating: 1500 | Tags: bitmasks, brute force, divide and conquer, dp, implementation
 * Problem:    https://codeforces.com/problemset/problem/1385/D
 * Submission: https://codeforces.com/contest/1385/submission/132072012
 * Solved: 2021-10-15 (PRACTICE)
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
 
 
int cunt(int a,string& freq, int l,int r)
{
	int s=0;
	for(int i=l;i<=r;i++)
		if(freq[i]==(char)('a'+a))
			s++;
	return s; 
}
 
 
int solve(int l,int r,string& freq,string& ch ,int k)
{
	
	if(l==r)
	{
		//cout<<cunt(ch[k]-'a',freq,l,l)<<" ";
		if(cunt(ch[k]-'a',freq,l,l)==1)
			return 1;
		else
			return 0;
		
	}
	//cout<<l<<" "<<r;
	int mid=(l+r)/2;
	
	int a,b;
	a=solve(l,mid,freq,ch,k+1)+cunt(ch[k]-'a',freq,mid+1,r);
	b=solve(mid+1,r,freq,ch,k+1)+cunt(ch[k]-'a',freq,l,mid);
	
	//cout<<a<<" "<<cunt(ch[k]-'a',freq,mid+1,r)<<" "<<b<<" "<<cunt(ch[k]-'a',freq,l,mid)<<"||\n";
	return max(a,b);        
	
}
 
 
int main ()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("","r",stdin);
	string c="abcdefghijklmnopqrstuvwxyz";
	testc
	{
		
		
		int n;
		cin>>n;
		
		string ch;
		cin>>ch;
		
		/*vector<vector<int>> freq;
		
		for(int i=0;i<26;i++)
		{
			vector<int> aux(n+1);
			
			freq.pb(aux);
		}
		
		
		
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<26;j++)
			{
				freq[j][i]=freq[j][i-1];
			}
			freq[ch[i-1]-'a'][i]++;
			
		}*/
		
		
		
		/*for(auto x:freq)
		{
			for(auto y:x)
			{
				cout<<y<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";*/
		
		//cout<<ch.size();
		cout<<n-solve(0,n-1,ch,c,0)<<"\n";
		
		
		
	
	}
 
 
}
