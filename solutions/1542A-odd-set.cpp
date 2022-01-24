/*
 * Codeforces 1542A - Odd Set
 * Rating: 800 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1542/A
 * Submission: https://codeforces.com/contest/1542/submission/143912435
 * Solved: 2022-01-24 (VIRTUAL)
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
        ll n;
        cin>>n;
        int imp=0;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            if(a&1)
                imp++;
          
        }
        
        if(imp!=n)
            cout<<"No\n";
        else
            cout<<"Yes\n";
        
    }
        
        
     
}
