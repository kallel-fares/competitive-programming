/*
 * Codeforces 1614A - Divan and a Store
 * Rating: 800 | Tags: brute force, constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1614/A
 * Submission: https://codeforces.com/contest/1614/submission/136993858
 * Solved: 2021-11-26 (CONTESTANT)
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
        
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        sort(vec.begin(), vec.end());
        int ans=0,s=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]>=l && vec[i]<=r && s+vec[i]<=k)
            {
                s+=vec[i];
                ans++;
            }
        }
        cout<<ans<<"\n";
        
        
        
        
    }
    
    
        
    
    
    
    
    
}
