/*
 * Codeforces 1637C - Andrew and Stones
 * Rating: 1200 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1637/C
 * Submission: https://codeforces.com/contest/1637/submission/146148700
 * Solved: 2022-02-12 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
 
const int m=1e9+7;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    
    testc
    {
        ll n;
        cin>>n;
        
        
        vector<int> vec(n);
        
        ll one=0,ans=0,v=0,imp=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            
            if(i>0 && i<n-1)
            {
                if(vec[i]==1)
                    one++;
                
                if(vec[i]&1)
                    imp++;
                
                ans+=(vec[i]/2)+(vec[i]%2);
            }
            
            
        }
        
        if(one==n-2)
            v=1;
        
        if(n==3 && vec[1]&1)
            v=1;
        
        if(v)
            cout<<"-1\n";
        else
            cout<<ans<<"\n";
            
        
        
    }
    
    
    
}
