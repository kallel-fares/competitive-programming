/*
 * Codeforces 1554C - Mikasa
 * Rating: 1800 | Tags: binary search, bitmasks, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1554/C
 * Submission: https://codeforces.com/contest/1554/submission/138030254
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
        
        ll n,m;
        cin>>n>>m;
        
        
        m++;
        ll ans=0,v=1;
        for(int i=30;i>=0;i--)
        {
            ll num=1LL<<i;
            
            //cout<<num<<" ";
            if(m&num)
            {
                if(!(n&num))
                    ans+=num;
            }
            else
            {
                if((n&num))
                {
                    v=0;
                    break;
                }
                
                
            }
        }
        
        cout<<ans<<"\n";
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
