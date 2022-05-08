/*
 * Codeforces 1678B1 - Tokitsukaze and Good 01-String (easy version)
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1678/B1
 * Submission: https://codeforces.com/contest/1678/submission/156316889
 * Solved: 2022-05-08 (CONTESTANT)
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
        
        
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        
        
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            while(ch[i]=='0' && i<n )
            {
                i++;
                cnt++;
            }
            if(cnt)
                vec.pb(cnt);
            
            cnt=0;
            while(ch[i]=='1' && i<n )
            {
                i++;
                cnt++;
            }
            i--;
            
            if(cnt)
                vec.pb(cnt);
            
        }
        
        int ans=0;
        int v=0;
        for(auto x:vec)
        {
            if(!v)
            {
                if(x&1)
                {
                    ans++;
                    v=1;
                }
                
            }
            else
            {
                if(x&1)
                {
                    v=0;
                }
                else
                {
                    ans++;
                    v=1;
                }
            }
        }
        cout<<ans<<"\n";
            
    }
    
    
    
}
