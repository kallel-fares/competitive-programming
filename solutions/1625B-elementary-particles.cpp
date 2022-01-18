/*
 * Codeforces 1625B - Elementary Particles
 * Rating: 1100 | Tags: brute force, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1625/B
 * Submission: https://codeforces.com/contest/1625/submission/143216944
 * Solved: 2022-01-18 (VIRTUAL)
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

 
 
 
/*
 110 111
 
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
        
        
        //vector<vector<int>> vec(150001);
        
        map<int, vector<int>> vec;
        
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec[a].pb(i);
            
            
        }
        int ans=-1;
        
        
    
        
        for(auto x:vec)
        {
            
            
            for(int i=0;i<x.second.size()-1;i++)
            {
                //cout<<x[i]<<" ";
                ans=max(ans,x.second[i]+n-x.second[i+1]);
                
            }
            
        }
        cout<<ans<<"\n";
        
        
        
        /*
         
         1**1**
         **1***11**
         
         
         */
        
        
        
        
        
        
        
        
        
    }
    
}
