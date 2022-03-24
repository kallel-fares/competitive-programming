/*
 * Codeforces 1657B - XY Sequence
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1657/B
 * Submission: https://codeforces.com/contest/1657/submission/150702925
 * Solved: 2022-03-24 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


//const int m=1e9+7;


ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b);
}


ll pop(const ll n)
{
    ll ans=0;
    for(ll i=0;i<=40;i++)
    {
        if((1LL<<i)&n)
            ans++;
    }
    return ans;
}
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    testc
    {
        int n,b,x,y;
        cin>>n>>b>>x>>y;
        
        ll ans=0,cur=0;
        for(int i=0;i<n;i++)
        {
            if(cur+x<=b)
            {
                cur+=x;
            }
            else
            {
                cur-=y;
            }
            ans+=cur;
        }
        
        cout<<ans<<"\n";
    }
    
    
}
