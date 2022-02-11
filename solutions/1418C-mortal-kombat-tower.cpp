/*
 * Codeforces 1418C - Mortal Kombat Tower
 * Rating: 1500 | Tags: dp, graphs, greedy, shortest paths
 * Problem:    https://codeforces.com/problemset/problem/1418/C
 * Submission: https://codeforces.com/contest/1418/submission/145947609
 * Solved: 2022-02-11 (PRACTICE)
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
    
    
    /*
     1 0 1 1 0 1 1 1
     
     
     
     
     */
    
    /*
     dp[i][1->2][1->2]
     */
    
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec(n);
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(2)));
        
        
        
            
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        
        
        if(n==1){
            cout<<vec[0]<<"\n";
            continue;
        }
        
        
        dp[0][0][0]=dp[0][1][0]=dp[0][0][1]=dp[0][1][1]=vec[0];
        
        dp[1][0][1]=dp[0][0][0]+vec[1];
        dp[1][1][0]=dp[0][0][0];
        dp[1][1][1]=dp[1][0][0]=1e8;
        
        
        for(int i=2;i<n;i++)
        {
            dp[i][0][1]=dp[i-1][0][0]+vec[i];
            //cout<<dp[i][0][1]<<" ";
            dp[i][1][1]=dp[i-1][1][0];
//            cout<<dp[i][1][1]<<" ";
            dp[i][0][0]=min(dp[i-1][1][0],dp[i-1][1][1])+vec[i];
//            cout<<dp[i][0][0]<<" ";
            dp[i][1][0]=min(dp[i-1][0][0],dp[i-1][0][1]);
//            cout<<dp[i][1][0]<<"\n";
        }
        
        cout<<min(min(dp[n-1][0][1],dp[n-1][1][0]),min(dp[n-1][0][0],dp[n-1][1][1]))<<"\n";
        
    }
    
    
}
