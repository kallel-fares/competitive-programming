/*
 * Codeforces 1668C - Make it Increasing
 * Rating: 1300 | Tags: brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1668/C
 * Submission: https://codeforces.com/contest/1668/submission/154123820
 * Solved: 2022-04-19 (CONTESTANT)
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
    
    
    int n;
    cin>>n;
    
    
    vector<ll> vec(n),suff(n),pref(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    
    
    ll ans=1LL<<60;
    
    
    for(int i=0;i<n;i++)
    {
        
        ll cnt=0;
        vector<ll >aux =vec;
        aux[i]=0;
        for(int j=i+1;j<n;j++)
        {
            
                //cout<<aux[j-1]<<" "<<aux[j]<<"\n";
                cnt+=(aux[j-1]/aux[j])+1;
                aux[j]*=(aux[j-1]/aux[j])+1;
            
            
        }
        
        //cout<<cnt<<" ";
        for(int j=i-1;j>=0;j--)
        {
            
                cnt+=(aux[j]/aux[j-1])+1;
                aux[j-1]*=(aux[j]/aux[j-1])+1;
            

        }
        
        
        ans=min(ans,cnt);
        
    }
    
    
    cout<<ans<<"\n";
    
    
}
