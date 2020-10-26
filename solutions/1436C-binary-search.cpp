/*
 * Codeforces 1436C - Binary Search
 * Rating: 1500 | Tags: binary search, combinatorics
 * Problem:    https://codeforces.com/problemset/problem/1436/C
 * Submission: https://codeforces.com/contest/1436/submission/96803026
 * Solved: 2020-10-26 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=1e9+7;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,x,pos,more,less,mid,last;
	ll ans=1;
	cin>>n>>x>>pos;
	
	if(n==1)
	{
		
		cout<<"1";
		return 0;
	}
		
	int left=0,right=n;
		
	more=n-x;
	less=x-1;
		
		
	while(left<right)
	{
		
		
		mid=(left+right)/2;
		
		//cout<<"mid="<<mid<<" ";
		if(mid<=pos)
		{
			left=mid+1;
			
				if(left!=pos+1)
				{
					ans=(ans*less%N)%N;
				//	cout<<less<<"L ";
					less--;
				}
				
			
			/*else
			{
				cout<<"hey";
			}*/
		}
		else
		{
			right=mid;
			
			if(right!=pos)
			{
				ans=(ans*more%N)%N;
				//cout<<more<<"R ";
				more--;
				
			}
			
			/*else
			{
				cout<<"hi "<<mid<<" ";
			}*/
				
		}
	}
		
			
	//cout<<ans<<"\n";	
	//cout<<less+more<<"\n";
	
	for(int i=1;i<=less+more;i++)
	{
		ans=(ans*i%N)%N;
	}
	
	
	cout<<ans%N<<"\n";
		
		
	


}
