/*
 * Codeforces 1646C - Factorials and Powers of Two
 * Rating: 1500 | Tags: bitmasks, brute force, constructive algorithms, dp, math
 * Problem:    https://codeforces.com/problemset/problem/1646/C
 * Submission: https://codeforces.com/contest/1646/submission/148358678
 * Solved: 2022-03-04 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b);
}

using namespace std;
 
//
//const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
//
//const int m=1e9+7;
 
// 3 3 3 3
//


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
    //cout<<"asd";
    
//    int a=2e9;
//    cout<<a<<" ";
    
    vector<ll> fact(16);
    fact[0]=1;
    for(ll i=1;i<=15;i++)
    {
        fact[i]=fact[i-1]*i;
        //cout<<i<<" "<<fact[i]<<"\n";
    }
    
    testc
    {
        
        ll n;
        cin>>n;
        
        ll ans=pop(n);
        
        
        for(int i=0;i<(1<<15);i++)
        {
            ll sum=0,cnt=0;
            for (int j = 0; j <= 14; j++)
            {
                if (i&(1LL<<j))
                {
                    
                    sum+=fact[j];
                    cnt++;
                }
                    
            }
            if(sum<=n)
            {
                
                ans=min(ans,cnt+pop(n-sum));
            }
        }
        //while
        
        cout<<ans<<"\n";
        //cout<<pop(n)<<"\n";
        
    
    }
    
    
}
