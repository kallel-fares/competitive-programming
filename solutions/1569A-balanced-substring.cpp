/*
 * Codeforces 1569A - Balanced Substring
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1569/A
 * Submission: https://codeforces.com/contest/1569/submission/136108969
 * Solved: 2021-11-18 (VIRTUAL)
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
        
        int n;
        cin>>n;
        
        string ch;
        cin>>ch;
        
        
        int ind=-1;
        for(int i=0;i<n-1;i++)
        {
            if(ch[i]!=ch[i+1])
                ind=i+1;
        }
        
        if(ind==-1)
            cout<<"-1 -1\n";
        else
            cout<<ind<<" "<<ind+1<<"\n";
        
    }
    
    
    
}
