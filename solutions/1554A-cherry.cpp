/*
 * Codeforces 1554A - Cherry
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1554/A
 * Submission: https://codeforces.com/contest/1554/submission/138018307
 * Solved: 2021-12-04 (VIRTUAL)
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


const int m=1e9+7;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
        
        
    testc
    {
        
        int n;
        cin>>n;
        vector<ll> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,vec[i]*vec[i+1]);
        }
        
        
        cout<<ans<<"\n";
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
