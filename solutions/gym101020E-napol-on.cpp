/*
 * Codeforces gym101020E - Napoléon
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101020/problem/E
 * Submission: https://codeforces.com/gym/101020/submission/102301420
 * Solved: 2020-12-25 (PRACTICE)
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
	
	int t,n;
	cin>>t;
	cin>>n;
	while(t--)
	{
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		if((a+b)%2!=((x+y)%2))
			cout<<"can't reach!\n";
		else
			cout<<max(abs(a-x),abs(b-y))<<"\n";
	}


}
