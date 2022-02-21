/*
 * Codeforces 1535C - Unstable String
 * Rating: 1400 | Tags: binary search, dp, greedy, implementation, strings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1535/C
 * Submission: https://codeforces.com/contest/1535/submission/147193042
 * Solved: 2022-02-21 (VIRTUAL)
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
     
     
     */
    
    testc
    {
        
        string ch;
        cin>>ch;
        
        int l=0,r=0,s=0,nos=0,n=ch.size();
        
        ll ans=0;
        
        
        
        while(r<n)
        {
            if(ch[r]=='?')
            {
                //cout<<"**"<<((l-r+1)*(l-r+2))/2<<" ";
                ans+=r-l+1;
                r++;
                continue;
            }
            
            if(ch[r]=='0')
            {
                //cout<<" hi "; 
                if(!(r&1))
                    s++;
                else
                    nos++;
            }
            else
            {
                if(r&1)
                    s++;
                else
                    nos++;
            }
            
            while( nos && s )
            {
                //cout<<"rabbeeeeek";
                
                if(ch[l]=='0')
                {
                    if(!(l&1))
                        s--;
                    else
                        nos--;
                }
                else if(ch[l]=='1')
                {
                    if(l&1)
                        s--;
                    else
                        nos--;
                }
                l++;
            }
            //cout<<((l-r+1)*(l-r+2))/2<<" ";
            ans+=r-l+1;
            
            
            r++;
        }
        
        
        cout<<ans<<"\n";
        
    }
    
}
