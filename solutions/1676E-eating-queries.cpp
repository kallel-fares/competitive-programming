/*
 * Codeforces 1676E - Eating Queries
 * Rating: 1100 | Tags: binary search, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1676/E
 * Submission: https://codeforces.com/contest/1676/submission/156674252
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
        int n,q;
        cin>>n>>q;
        
        vector<int> vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        sort(vec.begin(), vec.end(), greater<int>());
        
        for(int i=1;i<n;i++)
        {
            vec[i]+=vec[i-1];
        }
        
        
        for(int i=0;i<q;i++)
        {
            int a;
            cin>>a;
            
            auto it=lower_bound(vec.begin(),vec.end(),a);
            if(it==vec.end())
                cout<<"-1\n";
            else
                cout<<it-vec.begin()+1<<"\n";
            
            
            
        }
        
    }
    
    
    
}
