/*
 * Codeforces 1612C - Chat Ban
 * Rating: 1300 | Tags: binary search, math
 * Problem:    https://codeforces.com/problemset/problem/1612/C
 * Submission: https://codeforces.com/contest/1612/submission/136532962
 * Solved: 2021-11-22 (PRACTICE)
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
 

bool notcorr(vector<int>& ans ,int a,int b,int n)
{
    int mini=1000,maxi=0;
    for(int i=0;i<n/2;i++)
    {
        mini=min(ans[i],mini);
        
    }
    
    for(int i=n/2;i<n;i++)
    {
        
        maxi=max(ans[i],maxi);
    }
    
    if(mini!=a || maxi!=b)
        return true;
    else
        return false;
}
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc
    {
        ll k,x;
        
        cin>>k>>x;
        
        
        ll a=ceil((-1+sqrt(1+8*x))/2);
        
        ll ans=min(k,a);
        x-=(ans*(ans+1))/2;
        
        
        if(x<=0)
            cout<<ans<<" \n";
        else
        {
            
            //cout<<x<<" "<<ans<<" ";
            a=k-max((ll)((-1-sqrt(1+4*(k*k-k-2*x)))/-2),0LL);
            
            //cout<<(ll)ceil((-1-sqrt(1+4*(k*k-k-2*x)))/-2)<<" ";
            
            //cout<<a<<" ";
            ans+=min(k-1,a);
            cout<<ans<<"\n";
        }
            
            
        
        
    }
    
    
    
    
}
