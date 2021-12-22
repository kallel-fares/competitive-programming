/*
 * Codeforces 1392B - Omkar and Infinity Clock
 * Rating: 800 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1392/B
 * Submission: https://codeforces.com/contest/1392/submission/140299363
 * Solved: 2021-12-22 (VIRTUAL)
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



const int m=1e9+7;





queue<int> q;



/*
 110 111

*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        
        ll n,k;
        cin>>n>>k;
        
        vector<ll> vec(n);
        
        
        ll v=0,maxi=-2e9;
        
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]<0)
                v=1;
            
            maxi=max(maxi,vec[i]);
        }
            
        vector<ll> s1,s2;
        
        
        ll aux=0;
        for(int i=0;i<n;i++)
        {
            s1.pb(maxi-vec[i]);
            
            
            aux=max(aux,maxi-vec[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            s2.pb(aux-s1[i]);
        }
        
        if(k%2==1)
        {
            for(auto x:s1)
                cout<<x<<" ";
            cout<<"\n";
        }
        else
        {
            for(auto x:s2)
                cout<<x<<" ";
            cout<<"\n";
        }
        
        
        
        
        
        /*
        if(v)
        {
            ll aux=0;
            for(int i=0;i<n;i++)
            {
                s1.pb(maxi-vec[i]);
                
                
                aux=max(aux,maxi-vec[i]);
            }
            
            
            
            
            for(int i=0;i<n;i++)
            {
                s2.pb(aux-s1[i]);
            }
            k--;
            
            if(k%2==0)
            {
                for(auto x:s1)
                    cout<<x<<" ";
                cout<<"\n";
            }
            else
            {
                for(auto x:s2)
                    cout<<x<<" ";
                cout<<"\n";
            }
            
        }
        else
        {
            s1=vec;
            
            for(int i=0;i<n;i++)
            {
                s2.pb(maxi-vec[i]);
                
                
            }
            if(k%2==0)
            {
                for(auto x:s1)
                    cout<<x<<" ";
                cout<<"\n";
            }
            else
            {
                for(auto x:s2)
                    cout<<x<<" ";
                cout<<"\n";
            }
            
            
        }
        */
        
        
        
    }
}
