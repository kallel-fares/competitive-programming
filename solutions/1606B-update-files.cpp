/*
 * Codeforces 1606B - Update Files
 * Rating: 1100 | Tags: greedy, implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1606/B
 * Submission: https://codeforces.com/contest/1606/submission/136009789
 * Solved: 2021-11-17 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
int pp(ll a)
{
    for(ll i=63;i>=0;i--)
    {
        if(a&(1LL<<i))
            return i;
    }
    
    return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    

    
    testc
    {
        
        ll n,k;
        cin>>n>>k;
        
        
        ll ans=-1,i=0;
        
        int some=pp(k);
        //cout<<some<<" ";
        for(i=0;i<=some;i++)
        {
            
            //cout<<i<<"\n";
            if(n<=(1LL<<i))
            {
                break;
            }
            
        }
        //cout<<i<<" ";
        n-=(1LL<<i);
        //cout<<n<<" "<<ans<<" ";
        cout<<i+max(n,0LL)/k+min(1LL,max(n,0LL)%k)<<"\n";
            
        
        
    }
    
    
}
