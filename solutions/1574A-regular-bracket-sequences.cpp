/*
 * Codeforces 1574A - Regular Bracket Sequences
 * Rating: 800 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1574/A
 * Submission: https://codeforces.com/contest/1574/submission/136051479
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
    
    

    
    testc
    {
        
        int n;
        cin>>n;
        
        
        for(int i=0;i<n;i++)
        {
            string ch="";
            int s=i+1;
            
            for(int j=0;j<s;j++)
            {
                ch+='(';
            }
            for(int j=0;j<s;j++)
            {
                ch+=')';
            }
            for(int j=0;j<n-s;j++)
            {
                ch+='(';
            }
            for(int j=0;j<n-s;j++)
            {
                ch+=')';
            }
            cout<<ch<<"\n";
        }
        
        
        
        
    }
    
    
}
