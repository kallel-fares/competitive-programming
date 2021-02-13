/*
 * Codeforces 1107C - Brutality
 * Rating: 1300 | Tags: greedy, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1107/C
 * Submission: https://codeforces.com/contest/1107/submission/107277001
 * Solved: 2021-02-13 (PRACTICE)
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
	int n,k;
	string ch;
	cin>>n>>k;
	ll ans=0;
	vector<int> vec(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	cin>>ch;
	ch+='1';
	for(int i=0;i<n;i++)
	{
		vector<int> aux;
		aux.pb(vec[i]);
		while(ch[i]==ch[i+1] && i<n)
		{
			//cout<<vec[i+1]<<" ";
			aux.pb(vec[i+1]);
			i++;
		}
		sort(aux.begin(),aux.end(),greater<int>());
		int v=0;
		for(auto x:aux)
		{
			if(v==k)
				break;
			ans+=x;
			v++;
		}
		
		
	}
	cout<<ans;


}
