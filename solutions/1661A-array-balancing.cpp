/*
 * Codeforces 1661A - Array Balancing
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1661/A
 * Submission: https://codeforces.com/contest/1661/submission/153677344
 * Solved: 2022-04-14 (VIRTUAL)
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
 

vector<map<int, int>> dp;





int bfs1(vector<vector<int>>& vec,int u,int v)
{
    //int s=0;
//    cout<<u<<" ";
    
    
    int maxi1=0;
    
    
    for(auto x:vec[u])
    {
        if(x==v)
            continue;
        
        
        if(dp[u][x]==-1)
        {
            
            int aux=bfs1(vec, x, u);
            dp[u][x]=aux;
            
            maxi1=max(aux,maxi1);
        }
        else
        {
            maxi1=max(dp[u][x],maxi1);
        }
        
        
        
        
        
    }
    
    //cout<<u<<" "<<maxi1+maxi2+1<<"\n";
    
    
    
    return maxi1+1;
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
        
        vector<ll> vec1(n),vec2(n);
        
        
        for(int i=0;i<n;i++)
        {
            cin>>vec1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>vec2[i];
        }
        ll ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            
            ans+=abs(min(vec1[i],vec2[i])-min(vec1[i+1],vec2[i+1]))+abs(max(vec1[i],vec2[i])-max(vec1[i+1],vec2[i+1]));
        }
        
        cout<<ans<<"\n";
        
        
        
    }
    
    
    
}
