/*
 * Codeforces 1632C - Strange Test
 * Rating: 1600 | Tags: binary search, bitmasks, brute force, dp, math
 * Problem:    https://codeforces.com/problemset/problem/1632/C
 * Submission: https://codeforces.com/contest/1632/submission/144594150
 * Solved: 2022-01-30 (PRACTICE)
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


int rec(int a,int b,int c,int v)
{
    if(c<0)
        return v;
    if((a&(1<<c))==(b&(1<<c)))
    {
        if((a&(1<<c)))
        {
             return rec(a-(1<<c),b-(1<<c),c-1,v);
        }
        return rec(a,b,c-1,v);
    }
    
    if(a&(1<<c))
    {
        return (1<<c)-b+rec(a-(1<<c),0,c-1,v);
    }
    else
    {
        //cout<<c<<" ";
        return min(rec(a,b-(1<<c),c-1,1),(1<<c)-a+rec(0,b-(1<<c),c-1,v));
    }
    
    /*
     010
     101
     
     2 5
     */
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
        
        
        
        
        
    testc
    {
        int a,b;
        cin>>a>>b;
        cout<<rec(a,b,20,0)<<"\n";
    }
    
     
}
