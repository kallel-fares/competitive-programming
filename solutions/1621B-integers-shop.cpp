/*
 * Codeforces 1621B - Integers Shop
 * Rating: 1500 | Tags: data structures, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1621/B
 * Submission: https://codeforces.com/contest/1621/submission/141649664
 * Solved: 2022-01-04 (PRACTICE)
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
    
    
    testc
    {
       
        /*
         
         a<l
         b>r
         a==l
         b==r
         
         
         
         */
        
        ll n;
        cin>>n;
        map<ll,ll> m1,m2;
        ll lmost,rmost,_all=3e9,l=1e9+1,r=0;
        for(ll i=0;i<n;i++)
        {
            ll a,b,c,v=0,d=0;
            cin>>a>>b>>c;
            //int v=0;
                        
            if(a<=l)
            {
                if(a<l)
                    v++;
                else
                    d++;
                
                
                if(!m1[a])
                    m1[a]=c;
                else
                    m1[a]=min(m1[a],c);
                l=a;
            }
            
            if(b>=r)
            {
                if(b>r)
                    v++;
                else
                    d++;
                //cout<<b<<"*";
                if(!m2[b])
                    m2[b]=c;
                else
                    m2[b]=min(m2[b],c);
                r=b;
                
            }
            
            //cout<<m1[l]<<" "<<m2[r]<<"||";
            
            
            
            if(v+d==2)
                if(d==2)
                    _all=min(_all,c);
                else
                    _all=c;
            else if(v==1)
                _all=4e9;
            
            
            cout<<min(_all,m1[l]+m2[r])<<"\n";
        }
        
        
        
        
        
        
    }
    
    
}
