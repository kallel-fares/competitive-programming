/*
 * Codeforces 1217A - Creating a Character
 * Rating: 1300 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1217/A
 * Submission: https://codeforces.com/contest/1217/submission/106390447
 * Solved: 2021-02-03 (PRACTICE)
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
	testc
	{
		ll str,it,exp;
		cin>>str>>it>>exp;
		
		ll low_boun=(str+it+exp)/2+1;
		
		
			
		//cout<<low_boun<<" ";
		if(it-str>=exp)
		{
			cout<<"0";
		}
		else
		{
			cout<<str+exp-max(low_boun,str)+1;
			
		}
		
		cout<<"\n";
		
		//memset(tab,0,4*(n+1));
	
	}


}
