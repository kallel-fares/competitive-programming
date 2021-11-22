/*
 * Codeforces 1612A - Distance
 * Rating: 800 | Tags: brute force, constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1612/A
 * Submission: https://codeforces.com/contest/1612/submission/136434322
 * Solved: 2021-11-22 (CONTESTANT)
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
        int x,y;
        
        cin>>x>>y;
        
        
        if((x+y)&1)
            cout<<"-1 -1\n";
        else
        {
            if(x%2==0 && y%2==0)
                cout<<x/2<<" "<<y/2<<"\n";
            else
            {
                
                int mini;
                if(x>y)
                    cout<<(x+y)/2-y<<" "<<y<<"\n";
                else
                    cout<<x<<" "<<(x+y)/2-x<<"\n";
                
            }
                
        }
        
    }
    
    
    
    
}
