/*
 * Codeforces 1537B - Bad Boy
 * Rating: 900 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1537/B
 * Submission: https://codeforces.com/contest/1537/submission/131350027
 * Solved: 2021-10-09 (VIRTUAL)
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


int dist(int x1,int y1,int x2,int y2)
{
	return abs(x1-x2)+abs(y1-y2);
}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("","r",stdin);
	

	
	testc
	{
		int n,m,x,y;
		ll d=0;
		cin>>n>>m>>x>>y;
		
		
		vector<pair<int,int>> vec={make_pair(1,m),make_pair(n,m),make_pair(n,1),make_pair(1,1)};
		
		if(dist(x,y,1,1)+dist(x,y,n,m)>dist(x,y,1,m)+dist(x,y,n,1))
		{
			cout<<1<<" "<<1<<" "<<n<<" "<<m;
		}
		else
		{
			cout<<1<<" "<<m<<" "<<n<<" "<<1;
		}
		cout<<"\n";
		
	}


}
