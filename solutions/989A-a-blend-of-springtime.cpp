/*
 * Codeforces 989A - A Blend of Springtime
 * Rating: 900 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/989/A
 * Submission: https://codeforces.com/contest/989/submission/91292067
 * Solved: 2020-08-29 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

		string ch;
		int v=0;
		cin>>ch;
		if(ch.length()<3)
		{
			cout<<"No";
			return 0;
		}
		for(int i=0;i<ch.length()-2;i++)
		{
			string ch1=ch.substr(i,3);
		//	cout<<ch1<<"\n";
			if(ch1.compare("ABC")==0 || ch1.compare("ACB")==0 || ch1.compare("BAC")==0 || ch1.compare("BCA")==0 || ch1.compare("CAB")==0 || ch1.compare("CBA")==0)
			{
				v=1;
				break;
			}

		}
		if(v==1)
			cout<<"Yes";
		else
			cout<<"No";
		cout<<"\n";
	

}
