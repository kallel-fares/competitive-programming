/*
 * Codeforces 1660A - Vasya and Coins
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1660/A
 * Submission: https://codeforces.com/contest/1660/submission/152794169
 * Solved: 2022-04-05 (VIRTUAL)
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
    
    
    
    testc{
        int a,b;
        cin>>a>>b;
        
        if(!a)
        {
            cout<<"1\n";
            continue;
        }
        else
        {
            cout<<a+2*b+1<<"\n";
        }
    }
    
    
    
    
}
