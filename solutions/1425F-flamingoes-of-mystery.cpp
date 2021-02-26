/*
 * Codeforces 1425F - Flamingoes of Mystery
 * Rating: 1400 | Tags: interactive
 * Problem:    https://codeforces.com/problemset/problem/1425/F
 * Submission: https://codeforces.com/contest/1425/submission/108565222
 * Solved: 2021-02-26 (PRACTICE)
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
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	*/
	int n,s1;
	cin>>n;
	vector<int> ans(n+1);
	
	
	cout<<"? 1 2\n";
	fflush(stdout);
	cin>>s1;
	
	int aux,auxs1=s1,sum=0;
	for(int i=3;i<=n;i++)
	{
		
		cout<<"? 1 "<<i<<"\n";
		fflush(stdout);
		cin>>aux;
		ans[i]=aux-auxs1;
		sum+=ans[i];
		auxs1=aux;
	}
	cout<<"? 2 "<<n<<"\n";
	fflush(stdout);
	cin>>aux;
	ans[2]=aux-sum;
	ans[1]=s1-ans[2];
	cout<<"! ";
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";

}
