/*
 * Codeforces 1538F - Interesting Function
 * Rating: 1500 | Tags: binary search, dp, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1538/F
 * Submission: https://codeforces.com/contest/1538/submission/143960388
 * Solved: 2022-01-25 (PRACTICE)
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

 
 
 
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    testc
    {
        
        ll a,b;
        cin>>a>>b;
        
        
        ll aux=1,cnt=1,v1=0,v2=0;
        
        while( a/aux || b/aux )
        {
            v1+=a/aux;
            v2+=b/aux;
            
            aux*=10;
        }
        
        
        cout<<v2-v1<<"\n";
        
        
        
        
    }
        
        
     
}
