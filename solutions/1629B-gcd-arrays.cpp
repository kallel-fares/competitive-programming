/*
 * Codeforces 1629B - GCD Arrays
 * Rating: 800 | Tags: greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1629/B
 * Submission: https://codeforces.com/contest/1629/submission/143663923
 * Solved: 2022-01-22 (CONTESTANT)
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
    cout.tie(NULL);
    
    
    testc
    {
        int a,b,k;
        cin>>a>>b>>k;
        
        
        int imp=0;
        if((b-a+1)%2==0)
        {
            imp=(b-a+1)/2;
        }
        else
        {
            imp=(b-a+1)/2+(a&1);
        }
        
        if(a==b && a!=1)
        {
            cout<<"YES\n";
            continue;
        }
        
        int val=imp+1;
        
        while(val!=1)
        {
            k-=val/2;
            val=val/2+val%2;
        }
        
        if(k<0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
            
            
        
        /*
         1 2 3
         
         3 7
         
         6-2+1=5
          3 4 5 6
         2
         
         
         4
         
         */
        
    }
     
}
