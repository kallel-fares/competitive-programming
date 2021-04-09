/*
 * Codeforces 1316B - String Modification
 * Rating: 1400 | Tags: brute force, constructive algorithms, implementation, sortings, strings
 * Problem:    https://codeforces.com/problemset/problem/1316/B
 * Submission: https://codeforces.com/contest/1316/submission/112416990
 * Solved: 2021-04-09 (PRACTICE)
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

string modify(string ch,int k)
{
	
	int n=ch.size();
	
	string aux;
	
	
	for(int i=k-1;i<n;i++)
		aux+=ch[i];
		
	if(!((n-k)&1))
	{
		for(int i=k-2;i>=0;i--)
		{
			aux+=ch[i];
		}
		
	}
	else
	{
		for(int i=0;i<k-1;i++)
		{
			aux+=ch[i];
		}
	}
	
	/*for(int i=0;i<=n-k;i++)
	{
		reverse(ch.begin()+i,ch.begin()+i+k);
	}*/
	return aux;
	
	
	
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	
	/*string ch="abcdefg";
	cout<<modify(ch,3)<<" "<<modify(ch,4);*/
	
	
	testc
	{
		int n;
		string ch;
		cin>>n>>ch;
		vector<pair<string,int>> vec;
		
		vec.pb(make_pair(ch,1));
		for(int i=2;i<=n;i++)
		{
			vec.pb(make_pair(modify(ch,i),i));
		}
		
		sort(vec.begin(),vec.end());
		cout<<vec[0].first<<"\n"<<vec[0].second<<"\n";
	
	}


}
