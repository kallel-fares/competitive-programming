/*
 * Codeforces 1607B - Odd Grasshopper
 * Rating: 900 | Tags: math
 * Problem:    https://codeforces.com/problemset/problem/1607/B
 * Submission: https://codeforces.com/contest/1607/submission/134351188
 * Solved: 2021-11-04 (VIRTUAL)
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
        ll x,n;
        cin>>x>>n;
        if(x&1)
        {
            if(n%4==0)
            {
                cout<<x;
            }
            else if(n%4==1)
            {
                cout<<x+n;
            }
            else if(n%4==2)
            {
                cout<<x-1;
            }
            else
            {
                cout<<-n+x-1;
            }
        }
        else{
            if(n%4==0)
            {
                cout<<x;
            }
            else if(n%4==1)
            {
                cout<<x-n;
            }
            else if(n%4==2)
            {
                cout<<x+1;
            }
            else
            {
                cout<<n+x+1;
            }
        }
        
        cout<<"\n";
    }
    
    
    
 
}
