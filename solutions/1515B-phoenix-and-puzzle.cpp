/*
 * Codeforces 1515B - Phoenix and Puzzle
 * Rating: 1000 | Tags: brute force, geometry, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1515/B
 * Submission: https://codeforces.com/contest/1515/submission/136552215
 * Solved: 2021-11-22 (PRACTICE)
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
        ll n;
        cin>>n;
       
        
            
        int v=0;
        while(n%2==0)
        {
            v=1;
            n/=2;
        }
        
        if(ceil(sqrt(n))==(int)(sqrt(n)) && v)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
        
        
        
    }
    
    
    
    
}
