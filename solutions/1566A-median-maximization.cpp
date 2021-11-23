/*
 * Codeforces 1566A - Median Maximization
 * Rating: 800 | Tags: binary search, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1566/A
 * Submission: https://codeforces.com/contest/1566/submission/136596684
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
        ll n,s;
        cin>>n>>s;
        
        //cout<<n-(n/2+min(1LL,n%2)-1)<<" "<<s<<" ";
        cout<<s/(n-(n/2+min(1LL,n%2)-1))<<"\n";
       
        
        
        
        
    }
    
    
    
    
}
