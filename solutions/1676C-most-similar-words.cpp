/*
 * Codeforces 1676C - Most Similar Words
 * Rating: 800 | Tags: brute force, greedy, implementation, math, strings
 * Problem:    https://codeforces.com/problemset/problem/1676/C
 * Submission: https://codeforces.com/contest/1676/submission/156650427
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
        
        
        vector<string> vec;
        
        for(int i=0;i<n;i++)
        {
            string aux;
            cin>>aux;
            
            vec.pb(aux);
        }
        
        
        ll ans=1e18;
        for(int i=0;i<n;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                ll num=0;
                for(int k=0;k<m;k++)
                {
                    num+=abs(vec[i][k]-vec[j][k]);
                }
                ans=min(ans,num);
            }
            
        }
        
        
        
        cout<<ans<<"\n";
        
        
        
        
    }
    
    
    
}
