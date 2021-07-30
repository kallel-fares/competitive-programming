/*
 * Codeforces 1525B - Permutation Sort
 * Rating: 900 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1525/B
 * Submission: https://codeforces.com/contest/1525/submission/124253097
 * Solved: 2021-07-30 (VIRTUAL)
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


bool isorted(vector<int> vec)
{
	for(int i=0;i<vec.size()-1;i++)
	{
		if(vec[i]>vec[i+1])
			return false;
	}
	return true;
}

bool isreved(vector<int> vec)
{
	for(int i=0;i<vec.size()-1;i++)
	{
		if(vec[i]<vec[i+1])
			return false;
	}
	return true;
}



int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	testc
	{
		int n;
		cin>>n;
		
		vector<int> vec(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		
		
		if(vec[0]==n && vec[n-1]==1)
		{
			cout<<"3\n";
			continue;
		}
		
		if(isorted(vec))
		{
			cout<<"0\n";
		}		
		else
		{
			if(vec[0]==1 || vec[n-1]==n)
				cout<<"1\n";
			else
				cout<<"2\n";	
			
		}
		
	
	}


}
