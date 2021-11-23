/*
 * Codeforces 1566C - MAX-MEX Cut
 * Rating: 1000 | Tags: bitmasks, constructive algorithms, dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1566/C
 * Submission: https://codeforces.com/contest/1566/submission/136598640
 * Solved: 2021-11-23 (VIRTUAL)
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
        string ch,ch1;
        cin>>n>>ch>>ch1;
        
        ch+='4';
        ch1+='4';
        
        
        int z=0,ans=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='0' && ch1[i]=='0')
            {
                if(o){
                    ans+=2;
                    z=0;
                    o=0;
                }
                else
                    z++;
                
                
                continue;
            }
            
            
            if(ch[i]!=ch1[i])
            {
                
                ans+=z+2;
                z=0;
                o=0;
               
                continue;
            }
            
            
            if(ch[i]=='1' && ch1[i]=='1')
            {
                if(z){
                    ans+=z+1;
                    z=0;
                    o=0;
                }
                else
                    o=1;
                
                
                continue;
            }
        }
        
        cout<<ans+z<<"\n";
        
        
        
        
        
        
        
    }
    
    
    
    
}
