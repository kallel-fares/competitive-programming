/*
 * Codeforces 1555A - PizzaForces
 * Rating: 900 | Tags: brute force, math
 * Problem:    https://codeforces.com/problemset/problem/1555/A
 * Submission: https://codeforces.com/contest/1555/submission/136342493
 * Solved: 2021-11-21 (PRACTICE)
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
 
int finish(int x,int y,int m)
{
    for(int i=y;i<m;i++)
        cout<<x+1<<" "<<i+1<<"\n";
    int i=0;
    for(i=0;i<y;i++)
        cout<<x+1<<" "<<i+1<<"\n";
    return i-1;
}


const int MOD=0;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc
    {
        ll n;
        cin>>n;
        
        if(n<6)
        {
            cout<<"15\n";
            continue;
        }
        
        if(n%6==0)
        {
            cout<<(n/6)*15<<"\n";
            continue;
        }
        
        if(n%6<3)
        {
            cout<<(n/6)*15+5<<"\n";
            continue;
        }
        if(n%6<5)
        {
            cout<<(n/6)*15+10<<"\n";
            continue;
        }
        cout<<(n/6)*15+15<<"\n";
        
    }
    
    
    
}
