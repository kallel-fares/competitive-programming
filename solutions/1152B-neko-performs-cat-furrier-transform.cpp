/*
 * Codeforces 1152B - Neko Performs Cat Furrier Transform
 * Rating: 1300 | Tags: bitmasks, constructive algorithms, dfs and similar, math
 * Problem:    https://codeforces.com/problemset/problem/1152/B
 * Submission: https://codeforces.com/contest/1152/submission/106933524
 * Solved: 2021-02-08 (PRACTICE)
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
	int n,v=0;
	vector<int> ans;
	cin>>n;
	while(n!=1)
	{
		int aux=(int)log2(n)+1;
		ans.pb(aux);
		n=n^((int)pow(2,aux)-1);
		if(!n)
			break;
		n++;
		if((int)ceil(log2(n))==(int)log2(n))
		{
			ans.pb(0);
			n++;
		}
		//cout<<n<<" ";
	}
	cout<<ans.size()*2<<"\n";
	for(auto x:ans)
	{
		cout<<x<<" ";
	}
	
}
