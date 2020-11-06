/*
 * Codeforces 1023A - Single Wildcard Pattern Matching
 * Rating: 1200 | Tags: brute force, implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1023/A
 * Submission: https://codeforces.com/contest/1023/submission/97775906
 * Solved: 2020-11-06 (PRACTICE)
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

	int n,m,v=0,l=0;
	string ch1,ch2;
	cin>>n>>m;
	cin>>ch1>>ch2;

	if(ch1.size()>ch2.size()+1)
	{
		cout<<"NO";
		return 0;
	}


	int j=0;
	while(j<m && ch1[j]==ch2[j])
	{
		j++;
	}
	
	if(ch1[j]!='*' && j!=n)
	{
	//	cout<<j<<" ";
		v=1;
		//cout<<"gqsf";		
	}
	if(ch1[j]=='*')
		l=1;
	

	j=0;
	while(j<m && ch1[n-1-j]==ch2[m-1-j])
	{
		j++;
	}
	
	
	if(ch1[n-1-j]!='*' && j!=n)
	{
	//	cout<<j<<" ";
		v=1;
		//cout<<"gqsf";		
	}
	if(l==0 && m>n)
	{
		cout<<"NO";
		return 0;
	}
	if(v)
		cout<<"NO";
	else	
		cout<<"YES";

}
