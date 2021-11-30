/*
 * Codeforces 1609A - Divide and Multiply
 * Rating: 900 | Tags: greedy, implementation, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1609/A
 * Submission: https://codeforces.com/contest/1609/submission/137443909
 * Solved: 2021-11-30 (VIRTUAL)
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




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        
        
        ll s=1,ans=0;;
        for(int i=0;i<n;i++)
        {
            while(!(vec[i]&1))
            {
                vec[i]/=2;
                s*=2;
            }
            ans+=vec[i];
        }
        
        sort(vec.begin(),vec.end());
        
        ans+=vec[n-1]*(s-1);
        
        cout<<ans<<"\n";
 
        
    }
    
    
        
    
    
    
    
    
}
