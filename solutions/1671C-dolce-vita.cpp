/*
 * Codeforces 1671C - Dolce Vita
 * Rating: 1200 | Tags: binary search, brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1671/C
 * Submission: https://codeforces.com/contest/1671/submission/154554155
 * Solved: 2022-04-22 (CONTESTANT)
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


bool cmp(pair<int, int>a,pair<int, int>b){
    
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
    
}
 



vector<ll> spec,vals;


pair<ll, ll> dfs(vector<vector<int>>& vec,int u,int v)
{
//    cout<<u<<" ";
    
    ll val=0;
    
    if(spec[u])
    {
        val=vals[u];
    }
    
    pair<ll, ll> ans;
    
    for(auto x:vec[u])
    {
        if(x==v)
            continue;
        
        pair<ll, ll> aux=dfs(vec,x,u);
        
        ans.second=max(ans.second,aux.second);
        ans.first+=aux.first;
        
    }
    
    //cout<<u<<" "<<ans.first<<" "<<ans.second<<"\n";
    
    if(ans.first)
    {
        val=vals[u];
        if(val>=ans.second)
        {
            ans.first+=val-ans.second;
            ans.second=val;
        }
            
    }
    else
    {
        ans.first=val;
        ans.second=val;
    }
        
        
    return ans;
    
}


int main ()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    //cout<<-2/5;
    testc
    {
        int n,x;
        cin>>n>>x;
        vector<ll> vec(n),pre(n+1);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        sort(vec.begin(), vec.end());
        
        
        for(int i=0;i<n;i++)
        {
            pre[i+1]=pre[i]+vec[i];
        }
        ll ans=0;
        
        
        for(ll i=n;i>=1;i--)
        {
            if((x-vec[i-1]-pre[i-1])<0)
                continue;
            ans+=max(0LL,(x-vec[i-1]-pre[i-1])/i+1LL);
            //cout<<max(0LL,(x-vec[i-1]-pre[i-1])/i+min((x-vec[i-1]-pre[i-1])%i,1LL))<<" ";
        }
        
        cout<<ans<<"\n";
        
    }
    
}
