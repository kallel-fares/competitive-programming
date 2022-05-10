/*
 * Codeforces 1676D - X-Sum
 * Rating: 1000 | Tags: brute force, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1676/D
 * Submission: https://codeforces.com/contest/1676/submission/156666205
 * Solved: 2022-05-10 (CONTESTANT)
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

//
//ll dfs(vector<vector<int>> & tree, int a,vector<ll> &vec)
//{
//    ll mini=1e9+5;
//    //cout<<a<<" |";
//    if(!tree[a].size())
//    {
//
//            return vec[a];
//    }
//
//    for(auto x:tree[a])
//    {
//        ll num=dfs(tree,x,vec);
//        mini=min(mini,num);
//        ans+=num;
//    }
//
//    ll aux=max(mini,vec[a]);
//    ans+=-mini;
//    return aux;
//
//}




 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    

    
    testc
    {
        int n,m;
        cin>>n>>m;
        
        
        vector<vector<int>> vec(n, vector<int>(m));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>vec[i][j];
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int aux=vec[i][j];
                
                int k=1;
                while(i+k<n && j+k<m)
                {
                    aux+=vec[i+k][j+k];
                    k++;
                }
                
                k=1;
                while(i-k>=0 && j-k>=0)
                {
                    aux+=vec[i-k][j-k];
                    k++;
                }
        
                k=1;
                while(i+k<n && j-k>=0)
                {
                    aux+=vec[i+k][j-k];
                    k++;
                }
                
                k=1;
                while(i-k>=0 && j+k<m)
                {
                    aux+=vec[i-k][j+k];
                    k++;
                }
                
                ans=max(ans,aux);
                
                
            }
        }
        
        cout<<ans<<"\n";
        
        
        
        
    }
    
    
    
}
