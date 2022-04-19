/*
 * Codeforces 1668B - Social Distance
 * Rating: 900 | Tags: greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1668/B
 * Submission: https://codeforces.com/contest/1668/submission/154092246
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
    
    testc
    {
        int n,m;
        cin>>n>>m;
        
        vector<ll> vec(n),vec1(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        sort(vec.begin(), vec.end());
        
        int p=0;
        int l=0,r=n-1;
        for(int i=0;i<n;i++)
        {
            if(!(p&1))
            {
                vec1[l]=vec[i];
                l++;
            }
            else
            {
                vec1[r]=vec[i];
                r--;
            }
            p=(p+1)%2;
        }
        ll curr=vec1[0]*2+1;
        for(int i=1;i<n;i++)
        {
            curr+=max(vec1[i]-vec1[i-1],0LL)+vec1[i]+1;
        }
        curr-=min(vec1[0],vec[n-1]);
        
        //cout<<curr<<"\n";
        if(curr<=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
        
//        for(auto x:vec1)
//            cout<<x<<" ";
//
//        cout<<"\n";
        
        
    }
    
}
