/*
 * Codeforces 1515A - Phoenix and Gold
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1515/A
 * Submission: https://codeforces.com/contest/1515/submission/136551022
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
 

 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc
    {
        int n,x;
        cin>>n>>x;
        
        vector<int> vec(n);
        ll s=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            s+=vec[i];
            
        }
        
        if(s==x)
            cout<<"NO\n";
        else
        {
            s=0;
            cout<<"YES\n";
            int ans=-1;
            for(int i=0;i<n;i++)
            {
                
                
                if(s+vec[i]!=x)
                {
                    cout<<vec[i]<<" ";
                    s+=vec[i];
                    
                    
                    if(ans!=-1)
                    {
                        cout<<ans<<" ";
                        s+=ans;
                        ans=-1;
                    }
                        
                }
                else
                {
                    ans=vec[i];
                    //cout<<ans<<" asjkndsakd";
                }
                
                    
            }
            
            //cout<<"\n";
        }
        
        
    }
    
    
    
    
}
