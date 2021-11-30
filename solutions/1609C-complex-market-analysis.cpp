/*
 * Codeforces 1609C - Complex Market Analysis
 * Rating: 1400 | Tags: binary search, dp, implementation, number theory, schedules, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1609/C
 * Submission: https://codeforces.com/contest/1609/submission/137543877
 * Solved: 2021-11-30 (PRACTICE)
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

bool isprime(ll a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
            return false;
        
            
    }
    return true;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    vector<bool> siev(1000002);
    
    siev[1]=true;
        for(ll i=1;i*i<=1e6;i++)
        {
            if(siev[i]==false)
            {
                for(ll j=2;j*i<=1e6;j++)
                {
                    siev[j*i]=true;
                }
                
            }
        }
    
    
    
    testc
    {
        
        
        int n,k;
        cin>>n>>k;
        
        vector<int> vec(n);
        queue<int> q;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            
        }
        ll ans=0;
        for(int i=0;i<k;i++)
        {
            pair<int, int> p={0,0};
            int v=0;
            for(int j=i;j<n;j+=k)
            {
                //cout<<vec[j]<<" ";
                if(vec[j]==1)
                {
                    p.second++;
                    if(v)
                        ans+=1+p.first;
                    continue;
                }
                
                
                if(!siev[vec[j]])
                {
                    v=1;
                    ans+=p.second;
                    p.first=p.second;
                    p.second=0;
                }
                else
                {
                    p.first=p.second=0;
                    v=0;
                }
                
            }
            //cout<<ans<<"\n";
            
            
        }
        
        
        cout<<ans<<"\n";
    }
    
    
    
    
            
    /*if(vec[j]==1)
     {
         ones++;
         if(v)
             ans++;
         continue;
     }
         
     if(!siev[vec[j]])
     {
         v=1;
         ans+=ones;
         ones=0;
     }
     else
     {
         a=b=0;
         v=0;
     }*/
    
        
    
    
    
    
    
}
