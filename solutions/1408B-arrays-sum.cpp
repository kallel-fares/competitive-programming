/*
 * Codeforces 1408B - Arrays Sum
 * Rating: 1400 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1408/B
 * Submission: https://codeforces.com/contest/1408/submission/108817232
 * Solved: 2021-03-01 (PRACTICE)
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
		
		set<int> s;
		cin>>n>>k;
		
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			s.insert(a);	
		}                                                                                                       
		
		int su=s.size()-k;
		su=max(su,0);
		
		if(k==1 && s.size()>1)
		{
			cout<<"-1\n";
			continue;
		}
		
		if(k==1)
		{
			cout<<s.size()<<"\n";
			continue;
		}

		k--;
		
		
		
		cout<<su/k+min(su%k,1)+1<<"\n";
	
	}


}
