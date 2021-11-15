/*
 * Codeforces 1180B - Nick and Array
 * Rating: 1500 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1180/B
 * Submission: https://codeforces.com/contest/1180/submission/135777711
 * Solved: 2021-11-15 (PRACTICE)
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
    
    int n;
    cin>>n;
    vector<ll> vec;
    
    
    ll sum=1;
    
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a>=0)
            a=-a-1;
        vec.pb(a);
        
    }
    int maxi=0,ind=0;
    if(n&1)
    {
        int i=0;
        for(auto x:vec)
        {
            if(maxi<abs(x))
            {
                maxi=abs(x);
                ind=i;
            }
            i++;
        }
        
        
        vec[ind]=-vec[ind]-1;
    }
    
    
    for(auto x:vec)
        cout<<x<<" ";
        
    
    
}
