/*
 * Codeforces 1676A - Lucky?
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1676/A
 * Submission: https://codeforces.com/contest/1676/submission/156622640
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
        string ch;
        cin>>ch;
        
        int s1=0,s2=0;
        for(int i=0;i<3;i++)
        {
            s1+=ch[i]-'0';
        }
        for(int i=3;i<6;i++)
        {
            s2+=ch[i]-'0';
        }
        
        if(s1==s2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
        
        
        
        
    }
    
    
    
}
