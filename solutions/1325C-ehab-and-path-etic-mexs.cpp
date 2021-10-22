/*
 * Codeforces 1325C - Ehab and Path-etic MEXs
 * Rating: 1500 | Tags: constructive algorithms, dfs and similar, greedy, trees
 * Problem:    https://codeforces.com/problemset/problem/1325/C
 * Submission: https://codeforces.com/contest/1325/submission/132733413
 * Solved: 2021-10-22 (PRACTICE)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;
 
const int N=3e5+5;
 

 
int main ()
{
    
    int n;
    cin>>n;
    
    map<int,map<int,int>> tree;
    vector<pair<int,int>> ans;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        
        ans.pb(make_pair(a,b));
        tree[a][b]=-1;
        tree[b][a]=-1;
    }
    
    int v=0;
    for(int i=1;i<=n;i++)
    {
        if(v>2)
            break;
        if(tree[i].size()<2 && (tree[i].begin())->second==-1)
        {
            (tree[i].begin())->second=v;
            tree[(tree[i].begin())->first][i]=v;
            v++;
        }
    }
    
    
    for(int i=1;i<=n;i++)
    {
        if(v==n-1)
            break;
            
        for(auto x:tree[i])
        {
            if(x.second==-1)
            {
                tree[i][x.first]=v;
                //cout<<tree[i][x.second]<<" ";
                tree[x.first][i]=v;
                
                //cout<<tree[x.second][i]<<" ";
                v++;
            }
            
        }
            
        
        
        
    }
    
    //cout<<tree[3][2];
    
    for(auto x:ans)
    {
        cout<<tree[x.first][x.second]<<"\n";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
}
