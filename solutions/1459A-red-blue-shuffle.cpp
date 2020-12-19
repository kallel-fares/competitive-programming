/*
 * Codeforces 1459A - Red-Blue Shuffle
 * Rating: 800 | Tags: math, probabilities
 * Problem:    https://codeforces.com/problemset/problem/1459/A
 * Submission: https://codeforces.com/contest/1459/submission/101740558
 * Solved: 2020-12-19 (CONTESTANT)
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
	testc
	{
		int n,r=0,b=0;
		string ch1,ch2;
		cin>>n;
		cin>>ch1>>ch2;
		
		for(int i=0;i<n;i++)
			if(ch1[i]>ch2[i])
				r++;
			else if(ch1[i]<ch2[i])
				b++;
			
			
		//cout<<ch1<<" "<<ch2<<"\n";
		
		
		if(r==b)
			cout<<"EQUAL";
		else if(r<b)
			cout<<"BLUE";
		else
			cout<<"RED";
		cout<<"\n";
	}


}
