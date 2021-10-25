/*
 * Codeforces 1602A - Two Subsequences
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1602/A
 * Submission: https://codeforces.com/contest/1602/submission/133067434
 * Solved: 2021-10-25 (PRACTICE)
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
        string ch,ans="";
        cin>>ch;
        
        int a=200;
        for(int i=0;i<ch.size();i++)
        {
            a=min(a,ch[i]-'a');
        }
        
        for(int i=0;i<ch.size();i++)
        {
            if(ch[i]-'a'==a)
            {
                cout<<ch[i]<<" ";
                a=200;
            }
            else
            {
                ans+=ch[i];
            }
        }
        cout<<ans<<"\n";
        
    }
    
    
    
    
    
    
    
    
    
    
 
}
