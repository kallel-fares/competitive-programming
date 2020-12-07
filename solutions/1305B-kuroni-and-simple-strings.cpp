/*
 * Codeforces 1305B - Kuroni and Simple Strings
 * Rating: 1200 | Tags: constructive algorithms, greedy, strings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1305/B
 * Submission: https://codeforces.com/contest/1305/submission/100649969
 * Solved: 2020-12-07 (PRACTICE)
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
	
	vector<int> vect;
	string ch;
	cin>>ch;
	
	int i=0,k=ch.size()-1;
	
	while(i<k)
	{
		while(ch[i]==')')
		{
			i++;
		}
		if(ch[i]=='(')
			vect.pb(i),i++;
		
		while(ch[k]=='(')
		{
			k--;
		}
		if(i>k)
			break;
		
		if(ch[k]==')')
			vect.pb(k),k--;
	}
	if(vect.size()&1)
		vect[vect.size()-1]=1005;
	
	sort(vect.begin(),vect.end());
	if(vect.size()<=1)
	{
		cout<<"0";
	}
	else
	{
		cout<<"1\n"<<vect.size()-vect.size()%2<<"\n";
		for(int i=0;i<vect.size()-vect.size()%2;i++)
		{
			cout<<vect[i]+1<<" ";
		}
	}
	

}
