/*
 * Codeforces 1607C - Minimum Extraction
 * Rating: 1000 | Tags: brute force, sortings
 * Problem:    https://codeforces.com/problemset/problem/1607/C
 * Submission: https://codeforces.com/contest/1607/submission/135865041
 * Solved: 2021-11-16 (PRACTICE)
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
 
int dist(char c, char r)
{
    return min(abs(c-r),26-abs(c-r));
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<combine("SETT", "TEST");
    testc
    {
        int n;
        cin>>n;
        vector<ll> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        sort(vec.begin(), vec.end());
        
        ll pl=0,s=0;
        
        ll ans=-1e9-2;
        for(int i=0;i<n;i++)
        {
            s+=pl;
            //cout<<pl<<" "<<s<<"||";
            ans=max(ans,vec[i]+s);
            s=-vec[i]-pl;
            
        }
        
        cout<<ans<<"\n";
        
        
        
    }
    
    
}
