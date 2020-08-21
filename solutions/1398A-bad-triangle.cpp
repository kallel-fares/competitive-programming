/*
 * Codeforces 1398A - Bad Triangle
 * Rating: 800 | Tags: geometry, math
 * Problem:    https://codeforces.com/problemset/problem/1398/A
 * Submission: https://codeforces.com/contest/1398/submission/90547162
 * Solved: 2020-08-21 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;


const int N=2e5+5;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	testc
	{	
		int tab[N]={0};
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>tab[i];
		
		if(tab[0]+tab[1]>tab[n-1])
			cout<<"-1\n";
		else
			cout<<"1 2 "<<n<<"\n";
				
	}

}
