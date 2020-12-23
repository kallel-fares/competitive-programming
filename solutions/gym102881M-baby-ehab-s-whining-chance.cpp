/*
 * Codeforces gym102881M - Baby Ehab's Whining Chance
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102881/problem/M
 * Submission: https://codeforces.com/gym/102881/submission/102132721
 * Solved: 2020-12-23 (PRACTICE)
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
	
	freopen("lis.in","r",stdin);
	
	string ch;
	cin>>ch;
	
	
	ll ans=(ll)(ch[0]-'0'-1+(ch.size()-1)*9);
	sort(ch.begin(),ch.end());
	if(ch[0]=='9')
		cout<<ch.size()*9;
	else
		cout<<ans;

}
