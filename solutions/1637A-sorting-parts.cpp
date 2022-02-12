/*
 * Codeforces 1637A - Sorting Parts
 * Rating: 800 | Tags: brute force, sortings
 * Problem:    https://codeforces.com/problemset/problem/1637/A
 * Submission: https://codeforces.com/contest/1637/submission/146084383
 * Solved: 2022-02-12 (CONTESTANT)
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
        
        int a,v=0;
        cin>>a;
        for(int i=1;i<n;i++)
        {
            int b;
            cin>>b;
            
            if(a>b)
            {
                v=1;
            }
            
            a=b;
            
        }
        
        
        if(!v)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
        
    }
    
    
    
}
