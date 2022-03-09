/*
 * Codeforces 1650B - DIV + MOD
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1650/B
 * Submission: https://codeforces.com/contest/1650/submission/148979381
 * Solved: 2022-03-09 (PRACTICE)
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
        
        int l,r,a,ans;
        cin>>l>>r>>a;
        ans=r/a+r%a;
        
        
//        9/4
//
//        2 + 1
//
//        1 + 3
        
        
        
        
        if((r/a)*a-1>=l)
            ans=max(ans,(r/a)-1+(a-1));
        cout<<ans<<"\n";
        
        
    
    }
    
    
}
