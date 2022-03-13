/*
 * Codeforces 1651B - Prove Him Wrong
 * Rating: 800 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1651/B
 * Submission: https://codeforces.com/contest/1651/submission/149538275
 * Solved: 2022-03-13 (VIRTUAL)
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
    
    
    testc
    {
        int n;
        cin>>n;
        if(n>19)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        ll aux=1;
        for(int i=0;i<n;i++)
        {
            cout<<aux<<" ";
            aux*=2+1;
        }
        cout<<"\n";
            
        
        
    }
    
}
