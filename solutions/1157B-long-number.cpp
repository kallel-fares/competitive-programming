/*
 * Codeforces 1157B - Long Number
 * Rating: 1300 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1157/B
 * Submission: https://codeforces.com/contest/1157/submission/106975464
 * Solved: 2021-02-09 (PRACTICE)
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
	string ch;
	vector<int> vec(10);
	cin>>n;
	cin>>ch;
	
	for(int i=0;i<9;i++)
	{
		cin>>vec[i];
	}
	int v=0;
	for(int i=0;i<n;i++)
	{
		if(vec[ch[i]-'0'-1]<=ch[i]-'0' || v==1)
		{
			cout<<ch[i];
		}
		else
		{
			while(vec[ch[i]-'0'-1]>=ch[i]-'0' && i<n)
			{
				cout<<vec[ch[i]-'0'-1];
				i++;
			}
			i--;
			v=1;
		}
	}
	
	int j=0;
	
	
	
	
	
	
	

}
