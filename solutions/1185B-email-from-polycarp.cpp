/*
 * Codeforces 1185B - Email from Polycarp
 * Rating: 1200 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1185/B
 * Submission: https://codeforces.com/contest/1185/submission/97617624
 * Solved: 2020-11-04 (PRACTICE)
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


vector<pair<char,int>> compres(string ch)
{
	int v=1;
	vector<pair<char,int>> vect;
	for(int i=0;i<ch.size();i++)
	{
		
		while(ch[i]==ch[i+1])
		{
			i++;
			v++;
		}
		vect.pb(make_pair(ch[i],v));
		//cout<<v<<" ";
		v=1;

	}
	return vect;
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<pair<char,int>> vect,vect2;
	int n;
	string ch1,ch2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ch1>>ch2;
		int v=0;
			
				
		vect=compres(ch1);
		vect2=compres(ch2);
		
		
		
		
		
		
		
		if(vect.size()!=vect2.size())
		{
			cout<<"NO\n";
			continue;
		}
		
		
		
		for(int i=0;i<vect.size();i++)
		{
		//	cout<<vect[i].first<<" "<<vect[i].second<<" "<<vect2[i].first<<" "<<vect2[i].second;
			if(vect[i].first != vect2[i].first || vect[i].second>vect2[i].second)
			{
				v=1;
			}
		}
		
		if(v)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
			
			
	}
		
		
	


}
