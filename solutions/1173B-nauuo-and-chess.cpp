/*
 * Codeforces 1173B - Nauuo and Chess
 * Rating: 1100 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1173/B
 * Submission: https://codeforces.com/contest/1173/submission/138081387
 * Solved: 2021-12-05 (VIRTUAL)
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


const int m=1e9+7;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    int n;
    cin>>n;
    
    int m=(n+1)/2+(n+1)%2;
    
    
    cout<<m<<"\n";
    int i=0;
    for(i=1;i<=m;i++)
        cout<<1<<" "<<i<<"\n";
    
    n-=m;
    for(i=1;i<=n;i++)
        cout<<i+1<<" "<<m<<"\n";
    
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
        
    
    
    
}
