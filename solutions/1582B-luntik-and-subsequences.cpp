/*
 * Codeforces 1582B - Luntik and Subsequences
 * Rating: 900 | Tags: combinatorics, math
 * Problem:    https://codeforces.com/problemset/problem/1582/B
 * Submission: https://codeforces.com/contest/1582/submission/132870679
 * Solved: 2021-10-24 (CONTESTANT)
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
 
const int N=3e5+5;
 
 
 
int main ()
{
    
    
    testc
    {
        int n;
        cin>>n;
        map<int,ll> freq;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            freq[a]++;
            
        }
        
        cout<<(ll)pow(2,freq[0])*freq[1]<<"\n";
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
 
}
