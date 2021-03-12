/*
 * Codeforces gym101991L - Looking for Taste
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/101991/problem/L
 * Submission: https://codeforces.com/gym/101991/submission/109782550
 * Solved: 2021-03-12 (PRACTICE)
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

int ans;

bool comp(int a, int b) 
{
	
	return __builtin_popcount((ans|a)^ans) > __builtin_popcount((ans|b)^ans);
}


int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("looking.in","r",stdin);
	testc
	{
		int n,k;
		cin>>n>>k;
		
		vector<int> vec(n);
		ans=0;
		int popc=0;
		for(int i=0;i<n;i++)
		{
			
			cin>>vec[i];
			if(popc<__builtin_popcount(vec[i]))
			{
				popc=__builtin_popcount(vec[i]);
				ans=vec[i];
			}			
			
		}
		sort(vec.begin(),vec.end(),comp);
		k--;
		
		for(auto x:vec)
		{
			if(!k)
				break;
			
			if(__builtin_popcount((ans|x)^ans))
			{
				ans|=x;
				k--;
			}
			
			
			
		}
		/*
		for(int i=0;i<n;i++)
		{
				
		}*/
			
			
			
			
		cout<<ans<<"\n";
	
	}


}
