/*
 * Codeforces 1593C - Save More Mice
 * Rating: 1000 | Tags: binary search, greedy
 * Problem:    https://codeforces.com/problemset/problem/1593/C
 * Submission: https://codeforces.com/contest/1593/submission/132022187
 * Solved: 2021-10-15 (VIRTUAL)
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
		int n,k;
		cin>>n>>k;
		vector<int> vec(k);
		
		for(int i=0;i<k;i++)
		{
			cin>>vec[i];
		}
			
			
		sort(vec.begin(),vec.end(),greater<int>());
		
		/*
		for(auto x:vec)
			cout<<x<<" ";
		*/
		int ans=0;
		int s=0,cat=0;
		for(int i=0;i<k;i++)
		{
			if(cat>=vec[i])
				break;
			else
			{
				ans++;
				cat+=n-vec[i];
			}
		}
		cout<<ans<<"\n";
	}


}
