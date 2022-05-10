/*
 * Codeforces 1676F - Longest Strike
 * Rating: 1300 | Tags: data structures, greedy, implementation, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1676/F
 * Submission: https://codeforces.com/contest/1676/submission/156705655
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
        int n,k;
        cin>>n>>k;
        
        map<int, int> fre;
        set<int> se;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            fre[a]++;
            if(fre[a]==k)
            {
                se.insert(a);
            }
        }
        
        int prev=-2;
        int cur=0,ans=0,val=0;
        
        if(se.size())
        {
            val=*(se.begin());
            
        }
        
        for(auto x:se)
        {
//            cout<<x<<" "<<prev<<" "<<cur<<"|";
            if(x==prev+1)
            {
                cur++;
                if(cur>ans)
                {
                    ans=cur;
                    val=x;
                }
            }
            else
            {
                cur=0;
            }
            prev=x;
                
        }
        
        if(!val)
            cout<<"-1\n";
        else
            cout<<val-ans<<" "<<val<<"\n";
        
        
            
           
        
        
    }
    
    
    
}
