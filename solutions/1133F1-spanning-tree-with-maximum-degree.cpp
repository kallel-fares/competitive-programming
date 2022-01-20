/*
 * Codeforces 1133F1 - Spanning Tree with Maximum Degree
 * Rating: 1600 | Tags: graphs
 * Problem:    https://codeforces.com/problemset/problem/1133/F1
 * Submission: https://codeforces.com/contest/1133/submission/143457248
 * Solved: 2022-01-20 (PRACTICE)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
 
 
 
const int m=1e9+7;

 
 
 
/*
 110 111
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int n,m;
    cin>>n>>m;
    int maxi=0,ver=0;
    
    vector<vector<int>>g(n+1);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
        
        if(g[a].size()>maxi)
        {
            maxi=g[a].size();
            ver=a;
        }
        
        if(g[b].size()>maxi)
        {
            maxi=g[b].size();
            ver=b;
        }
    }
    
    
    queue<int> q;
    vector<int> visited(n+1);
    
    visited[ver]=ver;
    
    q.push(ver);
    
    while (!q.empty()) {
        
        int s=q.front();
        q.pop();
        
        for(auto x:g[s])
        {
            if(visited[x])
                continue;
            
            visited[x]=s;
            q.push(x);
        }
        
        
    }
    
    
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==i)
            continue;
        cout<<i<<" "<<visited[i]<<"\n";
        
    }
    
    
    
     
}
