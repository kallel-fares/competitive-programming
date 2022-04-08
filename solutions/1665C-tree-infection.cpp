/*
 * Codeforces 1665C - Tree Infection
 * Rating: 1600 | Tags: binary search, greedy, sortings, trees
 * Problem:    https://codeforces.com/problemset/problem/1665/C
 * Submission: https://codeforces.com/contest/1665/submission/153063699
 * Solved: 2022-04-08 (CONTESTANT)
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

ll ans;

ll dfs(vector<vector<int>> & tree, int a,vector<ll> &vec)
{
    ll mini=1e9+5;
    //cout<<a<<" |";
    if(!tree[a].size())
    {
        
            return vec[a];
    }
        
    for(auto x:tree[a])
    {
        ll num=dfs(tree,x,vec);
        //cout<<num<<" "<<x<<"|"<<ans<<" *";
        mini=min(mini,num);
        ans+=num;
    }
    
    //cout<<ans<<" ";
    
    ll aux=max(mini,vec[a]);
    ans+=-mini;
    //cout<<ans<<" ";
    return aux;
    
}
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    testc
    {
        
        int n;
        cin>>n;
        vector<int> vec(n+1),uninf,inf;
        
        
        
        for(int i=0;i<n-1;i++)
        {
            int a;
            cin>>a;
            vec[a]++;
        }
        
        uninf.pb(1);
        for(int i=1;i<=n;i++)
        {
            if(vec[i])
                uninf.pb(vec[i]);
        }
        
        sort(uninf.begin(), uninf.end(), greater<int>());
        
        int cnt=0,ans=0;
        
        int maxi1=0,maxi2=0;
        
        
        int v=1;
        int i=0;
        while (true)
        {
            if(!v)
            {
                maxi1-=2;
                maxi2--;
                
                int aux=max(maxi1,maxi2);
                maxi2=min(maxi1,maxi2);
                maxi1=aux;
                
            }
            else
            {
                maxi1--;
                maxi2--;
            }
            
            
                
            if(i<uninf.size())
            {
                
                //cout<<uninf[i]<<"hey man !";
                
                if(uninf[i]-1>maxi1)
                {
                    maxi1=uninf[i]-1;
                }
                else
                {
                    if(uninf[i]-1>maxi2)
                    {
                        maxi2=uninf[i]-1;
                    }
                    
                }
                //cout<<i<<" ";
                i++;
            }
            
            if(i==uninf.size())
                v=0;
            ans++;
                //cout<<v<<" "<<maxi1<<" "<<maxi2<<" || ";
            if(!v && maxi1<=0)
                break;
            
        }
        
            
        cout<<ans<<"\n";
        
        
        
        
        
        
        
    }
    
    
}
