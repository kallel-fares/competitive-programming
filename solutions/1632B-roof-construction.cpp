/*
 * Codeforces 1632B - Roof Construction
 * Rating: 1000 | Tags: bitmasks, constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1632/B
 * Submission: https://codeforces.com/contest/1632/submission/144552321
 * Solved: 2022-01-30 (CONTESTANT)
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
        int n;
        cin>>n;
        
        n--;
        int v=0;
        while(n)
        {
            cout<<n<<" ";
            
            
            if(__builtin_popcount(n)==1 && !v)
            {
                cout<<"0 ";
                v=1;
            }
            n--;
        }
        
        cout<<"\n";
    }
    
     
}
