/*
 * Codeforces 1675D - Vertical Paths
 * Rating: 1300 | Tags: graphs, implementation, trees
 * Problem:    https://codeforces.com/problemset/problem/1675/D
 * Submission: https://codeforces.com/contest/1675/submission/156007659
 * Solved: 2022-05-05 (PRACTICE)
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
        vector<int> vec(n+1),vis(n+1),freq(n+1);
        
        
        vector<vector<int>> ans;
        
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
            freq[vec[i]]=1;
        }
        
        if(n==1)
        {
            cout<<"1\n1\n"<<vec[1]<<"\n\n";
            continue;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(!freq[i])
            {
                vector<int> aux;
                int cur=i;
                while(!vis[cur])
                {
                    
                    vis[cur]=1;
                    aux.pb(cur);
                    cur=vec[cur];
                }
                reverse(aux.begin(),aux.end());
                ans.pb(aux);
            }
        }
        
        cout<<ans.size()<<"\n";
        for(auto x:ans)
        {
            cout<<x.size()<<"\n";
            for(auto y:x)
                cout<<y<<" ";
            cout<<"\n";
        }
        
        
        cout<<"\n";
        
        
        
    }
    
    
    
}
