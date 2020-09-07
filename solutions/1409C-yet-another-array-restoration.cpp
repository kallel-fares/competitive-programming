/*
 * Codeforces 1409C - Yet Another Array Restoration
 * Rating: 1200 | Tags: brute force, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1409/C
 * Submission: https://codeforces.com/contest/1409/submission/92138525
 * Solved: 2020-09-07 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)



#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testc
	{
		int n,x,y,ans,ans1,v=0;
		cin>>n>>x>>y;
		for(int i=1;i<=50;i++)
		{
			for(int j=1;j<=50;j++)
			{
				if((x-j)%i==0 && (y-j)%i==0 && (y-x)/i<n)
				{
					ans=i;
					//ans1=j;
					v=1;
					break; 
				}
			}
			if(v==1)
				break;
		}
		//cout<<ans<<" "<<ans1<<"\n";
		
		int i=0;
		while(y-ans*i>0 && n!=0)
		{
			cout<<y-ans*i<<" ";
			i++;
			n--;
		}
		i=1;
		while(n!=0)
		{
			cout<<y+ans*i<<" ";
			n--;
			i++;
		}
		
			
		/*for(int i=0;i<n;i++)
		{
			cout<<ans1+i*ans<<" ";
		}*/
		cout<<"\n";
		
	}
	


	

}
