/*
 * Codeforces 816B - Karen and Coffee
 * Rating: 1400 | Tags: binary search, data structures, implementation
 * Problem:    https://codeforces.com/problemset/problem/816/B
 * Submission: https://codeforces.com/contest/816/submission/112214661
 * Solved: 2021-04-07 (PRACTICE)
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

	
	
	
	int n,k,q;
	cin>>n>>k>>q;
	
	
	vector<int> freq(N+2),data(N+2);
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		freq[a]++;
		freq[b+1]--;
	}
	
	int last=0,sum=0;
	for(int i=0;i<N;i++)
	{
		last+=freq[i];
		//cout<<last<<" ";
		if(last>=k)
		{
			sum++;
		}
		
		data[i]=sum;
		
	}
	/*cout<<"\n"<<sum<<"\n";
	for(int i=90;i<=100;i++)
		cout<<i<<" "<<freq[i]<<" "<<data[i]<<"\n";*/
	
	
		
	////////////// prefix rab 
	
	for(int i=0;i<q;i++)
	{
		int a,b;
		cin>>a>>b;
		//cout<<data[b]<<" "<<data[a-1]<<" ";
		cout<<data[b]-data[a-1]<<"\n";
	}


}
