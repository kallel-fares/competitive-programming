/*
 * Codeforces 1638C - Inversion Graph
 * Rating: 1300 | Tags: data structures, dsu, graphs, math
 * Problem:    https://codeforces.com/problemset/problem/1638/C
 * Submission: https://codeforces.com/contest/1638/submission/146403681
 * Solved: 2022-02-14 (CONTESTANT)
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
        
        int n;
        cin>>n;
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        
        vector<int> dp(n+1,1e9);
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]>maxi)
            {
                dp[vec[i]]=1;
                maxi=vec[i];
            }
                
        }
        
        int mini=1e9;
        for(int i=n-1;i>=0;i--)
        {
            
            mini=min(mini,vec[i]);
            if(dp[vec[i]]==1)
                dp[vec[i]]=mini;
                
        }
        mini=1e9;
        int ans=0;
        for(int i=n;i>=1;i--)
        {
            
            if(dp[i]!=1e9)
            {
                if(i<mini)
                    ans++;
                
                mini=dp[i];
            }
                
        }
//        for(auto x:dp)
//            cout<<x<<" ";
//        cout<<"\n";
        cout<<ans<<"\n";
        
    }
    
    
    
}
