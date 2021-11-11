/*
 * Codeforces 1299A - Anu Has a Function
 * Rating: 1500 | Tags: brute force, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1299/A
 * Submission: https://codeforces.com/contest/1299/submission/134975167
 * Solved: 2021-11-11 (PRACTICE)
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
    int n;
    cin>>n;
    
    vector<int> vec(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    
    int ind=0,v=0;
    for(int k=30;k>=0;k--)
    {
        ind=0;
        v=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]&(1<<k))
            {
                v++;
                ind=i;
            }
        }
        if(v==1)
            break;
        
    }
    
    cout<<vec[ind]<<" ";
    for(int i=0;i<n;i++)
    {
        if(i!=ind)
        {
            cout<<vec[i]<<" ";
        }
    }
    
 
}
