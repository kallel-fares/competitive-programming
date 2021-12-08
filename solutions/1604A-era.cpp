/*
 * Codeforces 1604A - Era
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1604/A
 * Submission: https://codeforces.com/contest/1604/submission/138420590
 * Solved: 2021-12-08 (VIRTUAL)
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


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ans=max(ans,a-(i+1));
            
            
        
        }
    
        
        cout<<ans<<"\n";
        
        
    }
    
            
        
    
    
    
}
