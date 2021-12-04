/*
 * Codeforces 1554B - Cobb
 * Rating: 1700 | Tags: bitmasks, brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1554/B
 * Submission: https://codeforces.com/contest/1554/submission/138026875
 * Solved: 2021-12-04 (PRACTICE)
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
        
        ll n,k;
        cin>>n>>k;
        vector<ll> vec(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        ll ans=n*(n-1)-k*(vec[n-2]|vec[n-1]);
        
        reverse(vec.begin(), vec.end());
        
        
        for(int i=0;i<min(n,(ll)1000);i++)
        {
            
            for(int j=i+1;j<min(n,(ll)1000);j++)
            {
                //cout<<i<<" "<<j<<" "<<i*j-k*(vec[i]|vec[j])<<"|";
                ans=max(ans,(n-i)*(n-j)-k*(vec[i]|vec[j]));
            }
        }
        
        cout<<ans<<"\n";
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
