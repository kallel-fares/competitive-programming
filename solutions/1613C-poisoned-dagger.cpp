/*
 * Codeforces 1613C - Poisoned Dagger
 * Rating: 1200 | Tags: binary search
 * Problem:    https://codeforces.com/problemset/problem/1613/C
 * Submission: https://codeforces.com/contest/1613/submission/137692681
 * Solved: 2021-12-01 (CONTESTANT)
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


ll isright(ll k,vector<ll>& dist)
{
    
    ll aux=0;
    for(auto x:dist)
    {
        aux+=min(x,k);
    }
    
    return aux;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    testc
    {
            
        ll n,h;
        
        cin>>n>>h;
        vector<ll> vec(n),dis;
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        
        
        for(int i=0;i<n-1;i++)
        {
            dis.pb(vec[i+1]-vec[i]);
        }
        dis.pb(4e18+2);
        
        
        ll ans=1e18+2,maxi=2e18+2,mini=1;
        
        while(mini<=maxi)
        {
            ll k=(mini+maxi)/2;
            //cout<<mini<<" "<<k<<" "<<maxi<<"||";
            if(isright(k,dis)>=h)
            {
                ans=min(ans,k);
                maxi=k-1;
                
            }
            else{
                mini=k+1;
                
            }
            
            
            
        }
        
        
        /*for(auto x:dis)
        {
            cout<<x<<" ";
        }*/
        
        
        
        cout<<ans<<"\n";
        
    }
        
    
    
    
}
