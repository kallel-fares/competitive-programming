/*
 * Codeforces 1665A - GCD vs LCM
 * Rating: 800 | Tags: constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1665/A
 * Submission: https://codeforces.com/contest/1665/submission/153031967
 * Solved: 2022-04-08 (CONTESTANT)
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

ll ans;

ll dfs(vector<vector<int>> & tree, int a,vector<ll> &vec)
{
    ll mini=1e9+5;
    //cout<<a<<" |";
    if(!tree[a].size())
    {
        
            return vec[a];
    }
        
    for(auto x:tree[a])
    {
        ll num=dfs(tree,x,vec);
        //cout<<num<<" "<<x<<"|"<<ans<<" *";
        mini=min(mini,num);
        ans+=num;
    }
    
    //cout<<ans<<" ";
    
    ll aux=max(mini,vec[a]);
    ans+=-mini;
    //cout<<ans<<" ";
    return aux;
    
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
//        vector<int> vec(n);
//        for(int i=0;i<n;i++)
//            cin>>vec[i];
        
        
            cout<<n-3<<" 1 1 1\n";
        
        
        
        
    }
    
    
}
