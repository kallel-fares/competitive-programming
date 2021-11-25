/*
 * Codeforces 1611B - Team Composition: Programmers and Mathematicians
 * Rating: 800 | Tags: binary search, constructive algorithms, math
 * Problem:    https://codeforces.com/problemset/problem/1611/B
 * Submission: https://codeforces.com/contest/1611/submission/136899415
 * Solved: 2021-11-25 (CONTESTANT)
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
    
    
    testc{
        
        ll a,b;
        cin>>a>>b;
        
        
        
        ll big=max(a,b),sma=min(a,b);
        ll ans=0;
        
        ll mini=min((big-sma)/2,min(sma,big/3));
        cout<<mini+min((big-mini*3)/2,(sma-mini)/2)<<"\n";
        
    }
    

    
        
        
    
    
    
    
    
}
