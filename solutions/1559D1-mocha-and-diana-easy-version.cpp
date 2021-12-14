/*
 * Codeforces 1559D1 - Mocha and Diana (Easy Version)
 * Rating: 1400 | Tags: brute force, constructive algorithms, dsu, graphs, greedy, trees
 * Problem:    https://codeforces.com/problemset/problem/1559/D1
 * Submission: https://codeforces.com/contest/1559/submission/139117013
 * Solved: 2021-12-14 (PRACTICE)
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



void dfs(int i,int val,vector<vector<int>>& vec, vector<int>& check)
{
    check[i]=val;
    
    for(auto x:vec[i])
    {
        if(check[x]!=val)
            dfs(x,val,vec,check);
    }
}

const int m=1e9+7;


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    int n,m1,m2;
    cin>>n>>m1>>m2;
    vector<vector<int>>  f2(n+1),f1(n+1);
    vector<int> check1(n+1),check2(n+1);
    vector<pair<int, int>> ans;
    for(int i=0;i<m1;i++)
    {
        int a,b;
        cin>>a>>b;
        f1[a].pb(b);
        f1[b].pb(a);
    }
        
    for(int i=0;i<m2;i++)
    {
        int a,b;
        cin>>a>>b;
        f2[a].pb(b);
        f2[b].pb(a);
    }
        
    for(int i=1;i<=n;i++)
    {
        if(!check1[i])
            dfs(i,i,f1,check1);
    }
        
        
    for(int i=1;i<=n;i++)
    {
        if(!check2[i])
            dfs(i,i,f2,check2);
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(check1[i]!=check1[j] && check2[i]!=check2[j])
            {
                ans.pb(make_pair(i,j));
                f1[i].pb(j);
                f1[j].pb(i);
                f2[i].pb(j);
                f2[j].pb(i);
                dfs(i,j,f1,check1);
                dfs(i,j,f2,check2);
                /*for(auto x:check1)
                    cout<<x<<" ";
                cout<<"\n";
                for(auto x:check2)
                    cout<<x<<" ";
                cout<<"\n";*/
            }
        }
    }
    
    //for(auto x:check1)
      //  cout<<x<<" ";
    
    
    cout<<ans.size()<<"\n";
    for(auto x:ans)
        cout<<x.first<<" "<<x.second<<"\n";
    
    
    
    
}
