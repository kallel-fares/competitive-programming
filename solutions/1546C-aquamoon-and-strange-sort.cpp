/*
 * Codeforces 1546C - AquaMoon and Strange Sort
 * Rating: 1500 | Tags: sortings
 * Problem:    https://codeforces.com/problemset/problem/1546/C
 * Submission: https://codeforces.com/contest/1546/submission/132502698
 * Solved: 2021-10-20 (PRACTICE)
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
	
		int n;
		cin>>n;
		vector<int> vec(n),sorted(n);
		
		map <int,int> odd,even;
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			sorted[i]=vec[i];
		}
		
		sort(sorted.begin(),sorted.end());
		
		for(int i=0;i<n;i++)
		{
			if(i&1)
				odd[sorted[i]]++;
			else
				even[sorted[i]]++;
				
		}
		
		
		int v=0;
		
		for(int i=0;i<n;i++)
		{
			if(i&1)
			{
				if(odd[vec[i]])
				{
					odd[vec[i]]--;
				}
				else
				{
					v=1;
					break;
				}
			}
			else
			{
				if(even[vec[i]])
				{
					even[vec[i]]--;
				}
				else
				{
					v=1;
					break;
				}
			}
		}
		
		
		if(v)
			cout<<"NO\n";
		else
			cout<<"YES\n";
			
			
		
	
	}


}
