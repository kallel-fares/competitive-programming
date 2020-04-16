/*
 * Codeforces gym102397H - Mahmoud and the flagstones
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102397/problem/H
 * Submission: https://codeforces.com/gym/102397/submission/77023353
 * Solved: 2020-04-17 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;scanf("%d",&t);while(t--)
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int tab[N];
const int mod=1000000007;
int pow(int a,int b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
	ll damn=pow(a,b/2);
	return (damn*damn * pow(a,b&1))%mod;
}

int main ()
{
	int n;
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n;
	ll ans=0;
	int a,maxi=0;
	for(int i=0;i<n;i++)cin>>a,tab[a]++,maxi=max(maxi,a);
	forl(i,1,maxi+1)
	{
		ans=(ans+pow(2,tab[i])-1)%mod;
	}
	
	
	cout<<ans%mod;
}
