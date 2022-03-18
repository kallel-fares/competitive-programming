/*
 * Codeforces 1647A - Madoka and Math Dad
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1647/A
 * Submission: https://codeforces.com/contest/1647/submission/150031021
 * Solved: 2022-03-18 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


const int m=1e9+7;


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
    
    
    testc{
        
        int n;
        cin>>n;
        
        vector<int> vec;
        
        int cur=2;
        while(n-cur>=0)
        {
            vec.pb(cur);
            
            n-=cur;
            
            if(cur==2)
                cur=1;
            else
                cur=2;
            
        }
        
        if(n)
            cout<<n;
        for(auto x:vec)
            cout<<x;
        cout<<"\n";
        
    }
    
}
