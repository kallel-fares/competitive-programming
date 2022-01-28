/*
 * Codeforces 1476C - Longest Simple Cycle
 * Rating: 1600 | Tags: dp, graphs, greedy
 * Problem:    https://codeforces.com/problemset/problem/1476/C
 * Submission: https://codeforces.com/contest/1476/submission/144361137
 * Solved: 2022-01-28 (PRACTICE)
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

 
 
 
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
        
        
        
        
        
    testc
    {
        
        int n;
        cin>>n;
        vector<ll>vec(n),a(n),b(n),dp(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        
        dp[1]=vec[1]+abs(b[1]-a[1])+1;
        ll ans=dp[1];
        
        for(int i=2;i<n;i++)
        {
            dp[i]=vec[i]+abs(b[i]-a[i])+1;
            if(b[i]!=a[i])
            {
                dp[i]=max(dp[i],vec[i]+dp[i-1]-(abs(b[i]-a[i])-1));
            }
            ans=max(ans,dp[i]);
        }
        
        /*for(auto x:dp)
            cout<<x<<" ";
        cout<<"\n";*/
        
        cout<<ans<<"\n";
        
        
        
        
        
    }
        
        
     
}
