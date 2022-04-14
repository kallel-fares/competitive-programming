/*
 * Codeforces 1661B - Getting Zero
 * Rating: 1300 | Tags: bitmasks, brute force, dfs and similar, dp, graphs, greedy, shortest paths
 * Problem:    https://codeforces.com/problemset/problem/1661/B
 * Submission: https://codeforces.com/contest/1661/submission/153678058
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
    
    
   
    
        int n;
        cin>>n;
        
        //vector<ll> vec(n);
        
    
        
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            
            
            ll ans=16;
            
            for(ll j=0;j<=15;j++)
            {
                ll aux=(a+j)%32768,cnt=0;
                
                while(aux)
                {
                    aux=(aux*2)%32768;
                    cnt++;
                }
                
                ans=min(ans,j+cnt);
            }
            
            cout<<ans<<" ";
        }
        
        
        
        
    
    
    
    
}
