/*
 * Codeforces 1633C - Kill the Monster
 * Rating: 1100 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1633/C
 * Submission: https://codeforces.com/contest/1633/submission/144825104
 * Solved: 2022-02-01 (PRACTICE)
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
    
    
    
        
        
        
        
        
    testc
    {
        ll hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        
        ll left=0,right=k;
        
        int v=0;
        while (right>=0) {
            
            
            ll auxhc=hc+left*a;
            ll auxdc=dc+right*w;
            /*
             5/4
             
             
             
             */
            //cout<<(auxhc/dm+min(1LL,auxhc%dm)+1LL)*auxdc<<" ";
            if((auxhc/dm+min(1LL,auxhc%dm))>=hm/auxdc+min(1LL,hm%auxdc))
            {
                v=1;
            }
            
            right--;
            left++;
        }
        
        
        if(!v)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
        
        
    }
    
     
}
